@class NSString, NSNumber, NSData;

@interface DeviceInfoData : NSObject

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSNumber *RSSI;
@property (retain, nonatomic) NSData *manuData;

- (void).cxx_destruct;

@end
