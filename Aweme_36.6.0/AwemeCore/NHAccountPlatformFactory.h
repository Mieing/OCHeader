@interface NHAccountPlatformFactory : NSObject

+ (void)runOnceForLazyRegister;
+ (unsigned long long)accountPlaformFromStringValue:(id)a0;
+ (id)accountPlatformForName:(unsigned long long)a0;
+ (id)stringValueForAccountPlatformName:(unsigned long long)a0;
+ (id)allRegisterdPlatforms;
+ (void)registerPlatform:(id)a0 forName:(unsigned long long)a1;
+ (void)buildCacheIfNeeded;

@end
