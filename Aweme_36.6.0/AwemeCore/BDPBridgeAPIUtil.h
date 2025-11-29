@interface BDPBridgeAPIUtil : NSObject

+ (id)parseJson:(id)a0 error:(id *)a1 errKey:(id)a2 monitor:(id)a3;
+ (id)checkInputParams:(id)a0 metaData:(id)a1 error:(id *)a2;
+ (id)errorWithErrorMsg:(id)a0;
+ (BOOL)isBooleanString:(id)a0;
+ (id)checkParamType:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)getDefaultValue:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)checkParamNotEmpty:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)checkParamValid:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)checkParamInvalid:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)checkParamValidRange:(id)a0 paramName:(id)a1 metaData:(id)a2;
+ (id)parseJson:(id)a0 error:(id *)a1 errKey:(id)a2 monitor:(id)a3 containServerErrorTips:(BOOL)a4;
+ (void)useParseErrorV2WithJsonObj:(id)a0;
+ (BOOL)checkNeedOptWukongCheck;
+ (BOOL)checkNeedOptSettingsObtain;
+ (BOOL)checkNeedOptBridgePreCheck:(id)a0;
+ (BOOL)isNumericString:(id)a0;

@end
