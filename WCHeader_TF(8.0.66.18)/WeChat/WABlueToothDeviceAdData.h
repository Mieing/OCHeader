@class NSString, NSArray, NSData, NSDictionary;

@interface WABlueToothDeviceAdData : MMObject

@property (copy, nonatomic) NSString *localName;
@property (retain, nonatomic) NSData *manufacturerData;
@property (retain, nonatomic) NSArray *serviceUUIDs;
@property (retain, nonatomic) NSDictionary *serviceData;
@property (nonatomic) BOOL isConnectable;

- (void).cxx_destruct;

@end
