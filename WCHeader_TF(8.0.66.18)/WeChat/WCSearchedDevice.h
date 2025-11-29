@class CContact, NSDictionary, WCDevice, WCLanDeviceInfo, WCBLEDevice;

@interface WCSearchedDevice : NSObject

@property (nonatomic) int connProto;
@property (retain, nonatomic) WCDevice *originalDevice;
@property (retain, nonatomic) WCBLEDevice *bleDevice;
@property (retain, nonatomic) WCLanDeviceInfo *lanDevice;
@property (retain, nonatomic) NSDictionary *userData;
@property (retain, nonatomic) CContact *deviceContact;

- (id)init;
- (id)initWithBleDevice:(id)a0;
- (id)initWithLanDevice:(id)a0;
- (void).cxx_destruct;

@end
