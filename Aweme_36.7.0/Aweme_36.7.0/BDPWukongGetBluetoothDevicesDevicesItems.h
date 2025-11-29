@class NSArray, NSString, NSDictionary, NSNumber;

@interface BDPWukongGetBluetoothDevicesDevicesItems : BDPWukongModel

@property (retain, nonatomic) id advertisData;
@property (copy, nonatomic) NSArray *advertisServiceUUIDs;
@property (retain, nonatomic) NSNumber *connectable;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *localName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *rssi;
@property (copy, nonatomic) NSDictionary *serviceData;

+ (id)modelCustomPropertyMapper;

@end
