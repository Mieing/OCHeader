@class NSString;

@interface BDPWukongNotifyBLECharacteristicValueChangeParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *characteristicID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) BOOL isState;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (id)init;

@end
