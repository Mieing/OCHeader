@class NSString, MMPageSheetAdapter, MMListenMembershipJoinInfo, TingWecoinPlugin;

@interface LiteAppJsApiTingWecoinPay : LiteAppJsApi <TingQQMembershipViewDelegate, MMPageSheetAdapterDelegate>

@property (retain, nonatomic) MMListenMembershipJoinInfo *joinInfo;
@property (retain, nonatomic) TingWecoinPlugin *logic;
@property (weak, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)callbackResult:(unsigned long long)a0;
- (void)delayRefreshMembershipStatus;
- (void)reset;
- (void)showErrorToast;
- (void)showResultPage:(id)a0;
- (void)showQQMemberBindingPage;
- (void)showWecoinPayPanel;
- (void)_reportBuyMembershipSucceed:(BOOL)a0;
- (void)tingQQMembershipView:(id)a0 confirmButtonClicked:(id)a1;
- (void)tingQQMembershipView:(id)a0 wecoinButtonClicked:(id)a1;
- (void)pageSheetDidClose:(id)a0 closeType:(long long)a1;
- (void).cxx_destruct;

@end
