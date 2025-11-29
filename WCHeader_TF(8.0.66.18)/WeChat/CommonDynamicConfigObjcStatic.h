@interface CommonDynamicConfigObjcStatic : NSObject

+ (id)getDynamicConfigValue:(id)a0;
+ (unsigned int)getDynamicConfigUintHexValue:(id)a0;
+ (BOOL)getDynamicConfigBoolValueWithDefaultValue:(id)a0 defValue:(BOOL)a1;
+ (unsigned int)getDynamicConfigUintValueWithDefaultValue:(id)a0 defValue:(unsigned int)a1;

@end
