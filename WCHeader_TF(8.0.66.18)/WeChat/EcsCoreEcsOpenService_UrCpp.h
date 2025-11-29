@class NSString;

@interface EcsCoreEcsOpenService_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenService_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerNativeRouterHandler:(id)a0 handler:(id)a1;
- (void)unregisterNativeRouterHandler:(id)a0;
- (void)preload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id /* block */)a3;
- (void)open:(id)a0 context:(id)a1 callback:(id /* block */)a2;
- (void)openJson:(id)a0 context:(id)a1 callback:(id /* block */)a2;

@end
