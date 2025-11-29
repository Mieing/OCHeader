@class NSData, WCDevice;

@interface WCDeviceScanExt : MMObject

@property (retain, nonatomic) WCDevice *device;
@property (retain, nonatomic) NSData *extData;
@property (nonatomic) unsigned int lastOnScanTime;

- (void).cxx_destruct;

@end
