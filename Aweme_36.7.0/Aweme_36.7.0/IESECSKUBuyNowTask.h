@interface IESECSKUBuyNowTask : IESECSKUBaseTask

+ (id)generateUpdatedParamsWithBasicParams:(id)a0 skuParamsModel:(id)a1;
+ (id)goToOrderPageWithURL:(id)a0 queryItems:(id)a1 sourceBTMToken:(id)a2 skuParamsModel:(id)a3;

- (id)commonMonitorParams;
- (void)trackEnterPageBeginWithAction:(id)a0 categoryParams:(id)a1;
- (void)trackDuration:(id)a0 forAction:(id)a1 categoryParams:(id)a2;
- (void)trackEnterPageWithAction:(id)a0 success:(BOOL)a1 categoryParams:(id)a2 code:(id)a3 message:(id)a4;
- (void)p_runMultiSKUBuyNowTaskWithSKUParamsModel:(id)a0;
- (void)p_runSingleSKUAPIWithSKUParamsModel:(id)a0;
- (void)p_runSingleSKUBuyNowTaskWithSKUParamsModel:(id)a0 orderURL:(id)a1 buyNum:(long long)a2;
- (void)p_jumpOrderAction:(id /* block */)a0;
- (void)p_jumpOrderActionForLive;
- (id)runTask;

@end
