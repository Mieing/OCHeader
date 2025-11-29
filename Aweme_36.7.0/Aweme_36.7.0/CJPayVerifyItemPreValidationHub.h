@class CJPayHalfPreVerifyHubViewController, CJPayPreValidationHubModel, CJPayPopUpBaseViewController;

@interface CJPayVerifyItemPreValidationHub : CJPayVerifyItem

@property (retain, nonatomic) CJPayPreValidationHubModel *model;
@property (retain, nonatomic) CJPayHalfPreVerifyHubViewController *preVerifyHubVC;
@property (retain, nonatomic) CJPayPopUpBaseViewController *confirmPopVC;

- (BOOL)p_lynxRetain:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldShowRetainVC;
- (void)p_showConfirmPopPageWithCreateOrderResponse:(id)a0;
- (void)p_switch:(long long)a0 withExtraParam:(id)a1;
- (void)p_handleRetainVoucher:(id)a0;
- (void)retainOtherVerifyWithWay:(id)a0;
- (id)p_buildSwitchEventWithName:(id)a0 data:(id)a1;
- (void)gotoLynxPage:(id)a0;
- (void)p_trackPopPageEventName:(id)a0 params:(id)a1;
- (void)p_trackPopPageBtmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)p_handleConfirmPopupAction:(id)a0;
- (id)p_confirmPopTrackParams;
- (void).cxx_destruct;
- (void)closeAction;

@end
