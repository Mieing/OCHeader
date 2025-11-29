@interface CJPayDeskUtil : NSObject

+ (void)openLynxPageBySchema:(id)a0 completionBlock:(id /* block */)a1;
+ (void)openHybridPageBySchema:(id)a0 extParams:(id)a1 andInitialPropsDataStr:(id)a2 routeDelegate:(id)a3 completionBlock:(id /* block */)a4;
+ (void)openHybridPageBySchema:(id)a0 extParams:(id)a1 andInitialPropsDataStr:(id)a2 routeDelegate:(id)a3 routeSingleTop:(BOOL)a4 completionBlock:(id /* block */)a5;
+ (void)openLynxPageBySchema:(id)a0 routeDelegate:(id)a1 completionBlock:(id /* block */)a2;
+ (void)openLynxPageBySchema:(id)a0 extParams:(id)a1 completionBlock:(id /* block */)a2;
+ (void)openLynxPageBySchema:(id)a0 extParams:(id)a1 routeDelegate:(id)a2 completionBlock:(id /* block */)a3;
+ (id)p_tryWrapperSchemaForSaas:(id)a0;
+ (id)p_tryWrapperSchemaForFreeLogin:(id)a0;

@end
