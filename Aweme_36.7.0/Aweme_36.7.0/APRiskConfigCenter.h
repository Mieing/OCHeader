@interface APRiskConfigCenter : NSObject

+ (id)configStringValue:(id)a0;
+ (id)configStringValue:(id)a0 defaultValue:(id)a1;
+ (BOOL)configStringValueIsTrue:(id)a0;
+ (BOOL)configBoolValue:(id)a0;
+ (BOOL)configBoolValue:(id)a0 defaultValue:(BOOL)a1;
+ (int)configIntValue:(id)a0;
+ (int)configIntValue:(id)a0 defaultValue:(int)a1;
+ (double)configDoubleValue:(id)a0;
+ (id)configDictValue:(id)a0;
+ (id)configDictValue:(id)a0 defaultValue:(id)a1;
+ (int)configIntValueDefaultOn:(id)a0;
+ (int)getDynamicDetectSwitchConfig;
+ (int)getDynamicDetectV3SwitchConfig;

@end
