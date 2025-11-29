@class NSString;

@interface EcsCoreEcsOpenRouterNativeHandler_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenRouterNativeHandler_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerNativeUriHandler:(id)a0 handler:(id)a1;
- (void)unregisterNativeUriHandler:(id)a0;
- (id)name;
- (BOOL)canHandle:(id)a0 context:(id)a1;
- (void)handlePreload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id /* block */)a3;
- (void)handleOpen:(id)a0 context:(id)a1 callback:(id /* block */)a2;

@end
