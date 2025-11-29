@class CBCharacteristic, NSString, CBPeripheral, NSStream, EASession, EAAccessory, NSMutableData;

@interface Device : NSObject

@property (retain) EAAccessory *accessory;
@property (retain) EASession *session;
@property (retain) CBPeripheral *peripheral;
@property (retain) CBCharacteristic *writeCharacter;
@property (retain) CBCharacteristic *notifyCharacter;
@property (retain) NSMutableData *receiveData;
@property (retain) NSMutableData *sendingData;
@property (retain) NSString *MAC;
@property (retain) NSString *Name;
@property BOOL errorFlag;
@property BOOL isSending;
@property BOOL isConnectedBy3rdApp;
@property int state;
@property long long did;
@property long long sid;
@property (retain) NSStream *input;
@property (retain) NSStream *output;
@property int profileConnectState;
@property int profileType;
@property (retain) CBCharacteristic *pedometerProfileCurMeasurementCharacter;
@property (retain) CBCharacteristic *pedometerProfileTargetCharacter;

- (id)init;
- (void).cxx_destruct;

@end
