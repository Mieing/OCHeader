@interface IESECContinuePayContext : IESECBuyNowContext

- (id)pageBTM;
- (id)baseTrackerParams;
- (BOOL)isContinuePay;
- (id)prepareQueryParams;
- (double)heightForNavView;
- (unsigned long long)stateViewClosePosition;
- (id)getApiWithApiType:(id)a0;
- (id)modelScene;
- (id)initWithRequest:(id)a0;

@end
