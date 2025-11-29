@class NSDate;

@interface BDUGLuckyCatPreloadAppMarketXBridge : BDUGLuckyXBridgeMethod

@property (retain, nonatomic) NSDate *preloadStartTime;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)invokeCallbackBlock:(id /* block */)a0 status:(long long)a1;
- (id)trackParamsWithAppleID:(id)a0;
- (void).cxx_destruct;
- (id)methodName;

@end
