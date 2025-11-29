@interface MagicEcsJsApiRegister : NSObject

+ (BOOL)isEcsBizName:(id)a0;
+ (void)registerJsApis:(id)a0 config:(id)a1;
+ (id)jsApiListForBizName:(id)a0;
+ (id)extJsApiListForBizName:(id)a0;

@end
