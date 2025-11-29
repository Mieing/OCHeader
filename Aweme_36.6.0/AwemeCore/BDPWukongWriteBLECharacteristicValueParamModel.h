@class NSString;

@interface BDPWukongWriteBLECharacteristicValueParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *characteristicID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *serviceID;
@property (retain, nonatomic) id value;
@property (nonatomic) long long writeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;

@end
