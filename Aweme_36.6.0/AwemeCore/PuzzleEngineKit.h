@interface PuzzleEngineKit : NSObject

+ (void)registerLifeCycleInterceptor:(id)a0;
+ (void)startTasksForKey:(char *)a0;
+ (void)registerContainerVCRouterInterceptor:(id)a0;
+ (void)unregiserLifeCycleInterceptor:(id)a0;
+ (void)registerWebViewInterceptor:(id)a0;
+ (void)unregisterContainerVCRouterInterceptor:(id)a0;
+ (void)unregiserWebViewInterceptor:(id)a0;
+ (void)registAndBindServices;
+ (BOOL)isPostInitializeNotification;
+ (BOOL)didSetup;
+ (void)setupWithConfiguration:(id)a0;

@end
