@class CJPayIntegratedResultPageView, NSString, NSDictionary, CJPayOrderResultResponse, CJPayCreateOrderResponse;

@interface CJPayResultPageViewController : CJPayHalfPageBaseViewController <CJPayIntegratedResultPageViewDelegate>

@property (retain, nonatomic) CJPayIntegratedResultPageView *resultView;
@property (retain, nonatomic) CJPayOrderResultResponse *resultResponse;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (copy, nonatomic) NSString *customTitle;
@property (nonatomic) BOOL isOneKeyQuickPay;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_setNavTitle;
- (long long)closeAfterTime;
- (void)p_showResult;
- (void)p_trackWhenViewDidLoad;
- (void)p_resultPageType;
- (void)p_setSuccessState;
- (void)stateButtonClick:(id)a0;
- (void)closeActionAfterTime:(int)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)back;

@end
