@class NSString;

@interface BDPWukongGetConnectedBluetoothDevicesDevicesItems : BDPWukongModel

@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *name;

+ (id)modelCustomPropertyMapper;

@end
