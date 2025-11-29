@class NSString;

@interface CommonHybridRouterHandlerCpp : UnitRCObjcBaseProxyClass <CommonHybridRouterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerRouterHandler:(id)a0 handler:(id)a1;
+ (void)unregisterRouterHandler:(id)a0;

- (void)handleOpen:(id)a0 callback:(id /* block */)a1;
- (id)getPlatformKey;

@end
