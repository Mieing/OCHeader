@class BDXThreadSafeArray;

@interface AnnieContainerVCRouterInterceptor : NSObject

@property (retain, nonatomic) BDXThreadSafeArray *interceptors;

+ (void)registerContainerVCRouterInterceptor:(id)a0;
+ (BOOL)customHandleWithParams:(id)a0;
+ (void)unregisterContainerVCRouterInterceptor:(id)a0;
+ (id)sharedInstance;

- (void)registerContainerVCRouterInterceptor:(id)a0;
- (BOOL)customHandleWithParams:(id)a0;
- (void)unregisterContainerVCRouterInterceptor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
