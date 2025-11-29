@interface BDPWukongGetBluetoothAdapterStateResultModel : BDPWukongModel

@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isDiscovering;

+ (id)modelCustomPropertyMapper;

@end
