@interface AWEStudioSchemaToComposerImpl : NSObject

+ (id)objectWithClass:(Class)a0 dictionary:(id)a1;
+ (void)actionWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)composerForSchema:(id)a0;
+ (void)p_actionWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)objectWithClass:(Class)a0 string:(id)a1;
+ (BOOL)blockCheckConfig:(id)a0 keyPaths:(id)a1 rule:(id)a2;
+ (id)customCameraCustomizationWithParamsDictionary:(id)a0;
+ (BOOL)judgeValue:(id)a0 rule:(id)a1;
+ (BOOL)checkParamsAvailable:(id)a0 inputDict:(id)a1 configStr:(id)a2;
+ (id)blocklist;

@end
