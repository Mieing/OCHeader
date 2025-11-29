@interface BDUGLuckyCatOpenAppMarketXBridge : BDUGLuckyXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)__openInsideAppStoreWithID:(id)a0 downloadScene:(long long)a1;
- (void)__openAppStoreWithParamModel:(id)a0;
- (id)__appStoreAppIDWithURL:(id)a0;
- (void)__openOutsideAppStoreWithParamModel:(id)a0 URL:(id)a1;
- (id)methodName;

@end
