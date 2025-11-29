@interface HybridLynxKitUtils : NSObject

+ (BOOL)isRelativeURL:(id)a0;
+ (BOOL)isResourceLoaderNotHandleURL:(id)a0;
+ (id)lynxKitParamsWithContext:(id)a0;
+ (id)globalPropsWithParams:(id)a0 onDictionaryParamsCreated:(id /* block */)a1;
+ (id)_defaultGlobalPropsWithParams:(id)a0;
+ (void)toastErrorMessage:(id)a0 forDuration:(long long)a1;
+ (BOOL)checkSupportLoadTemplateWithBundle:(id)a0 view:(id)a1;
+ (id)globalPropsWithParams:(id)a0;

@end
