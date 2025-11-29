@class GetWecoinPriceListResponse, PrepareWecoinRechargeResponse, NSString, MMUIViewController, WCCoinBuyCoinParameter, WCCoinInterceptLogic, WCCoinBuyCoinView;
@protocol WCCoinBuyCoinLogicDelegate;

@interface WCCoinBuyCoinLogic : MMObject <WCCoinGetWeCoinPriceListCgiDelegate, WCCoinPrepareRechargeCgiDelegate, WCCoinBuyCoinViewDelegate, ServiceAuthExt>

@property (retain, nonatomic) GetWecoinPriceListResponse *priceListResponse;
@property (retain, nonatomic) WCCoinBuyCoinView *buyCoinView;
@property (retain, nonatomic) PrepareWecoinRechargeResponse *prepareRechargeResponse;
@property (retain, nonatomic) WCCoinInterceptLogic *interceptLogic;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned long long startTime;
@property (weak, nonatomic) MMUIViewController *loadingVC;
@property (retain, nonatomic) WCCoinBuyCoinParameter *parameter;
@property (weak, nonatomic) id<WCCoinBuyCoinLogicDelegate> delegate;
@property (nonatomic) unsigned long long cancelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)getPriceListStartLoading;
- (void)getPriceListStopLoading;
- (void)startLoadingInTopVC;
- (void)stopLoadingInTopVC;
- (id)getTopVC;
- (void)showErrorStr:(id)a0;
- (void)showError:(id)a0;
- (void)showNSError:(id)a0;
- (void)reportSuccessCostTime;
- (BOOL)isNotEnoughScene:(int)a0;
- (void)callSuccess;
- (void)callFail;
- (void)callCancel;
- (void)prepareBuyCoin:(id)a0;
- (void)buyCoin:(id)a0;
- (void)callCancelBillCgi;
- (void)handleIntercept:(id)a0;
- (void)didClickBuyCoin:(id)a0 info:(id)a1;
- (void)buyCoinViewDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)getPriceListCgi:(id)a0 didGetResponse:(id)a1;
- (void)getPriceListCgi:(id)a0 didFailWithError:(id)a1;
- (void)prepareRechargeCgi:(id)a0 didGetResponse:(id)a1;
- (void)prepareRechargeCgi:(id)a0 didFailWithError:(id)a1;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCancelServiceAuth;
- (void).cxx_destruct;

@end
