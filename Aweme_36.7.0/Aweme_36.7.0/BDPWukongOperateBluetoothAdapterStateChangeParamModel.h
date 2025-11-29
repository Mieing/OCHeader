@class NSString;

@interface BDPWukongOperateBluetoothAdapterStateChangeParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (nonatomic) long long operate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonSchemaDict;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;

@end
