@class NSString;

@interface BDPWukongReadBLECharacteristicValueParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *characteristicID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *serviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;


@end
