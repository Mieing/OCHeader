@interface BCAAMainExecutableContext : NSObject

+ (void)getLazyLoadSectionData;
+ (void)resolveAppBundleServices;
+ (void)ensureLoadBCAASectionInfo;
+ (id)dylibNameForCustomSection:(id)a0 andModule:(id)a1;
+ (id)dylibNameForCustomSection:(id)a0 andModule:(id)a1 withKey:(id)a2;
+ (id)contentForCustomSection:(id)a0;
+ (BOOL)checkIfLazyDylibEnable:(id)a0;

@end
