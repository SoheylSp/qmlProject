import QtQuick 2.14
import QtQuick.Window 2.14

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListView{

        anchors.fill: parent
        model :MyCppModel

        delegate: Rectangle{

            anchors.fill: parent

            Text{

                anchors.fill: parent
                text: model.name
            }
        }
    }
}
