@class WCDevice;

@interface WCDeviceConnectExt : MMObject

@property (retain, nonatomic) WCDevice *device;
@property (nonatomic) int connectState;
@property (nonatomic) BOOL tryConnect;

- (void).cxx_destruct;

@end
