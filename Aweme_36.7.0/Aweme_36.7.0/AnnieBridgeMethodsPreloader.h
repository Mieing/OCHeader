@interface AnnieBridgeMethodsPreloader : NSObject

+ (unsigned long long)mappedAuthType:(unsigned long long)a0;
+ (void)_registerNewBridgeMethodToGlobal:(id)a0;
+ (void)_registerLegacyBridgeMethodToGlobal:(id)a0;
+ (void)loadAnnieBridgeMethodsTask;

@end
