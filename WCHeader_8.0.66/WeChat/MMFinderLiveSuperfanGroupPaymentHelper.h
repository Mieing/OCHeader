@class MMFinderLiveGenericPaymentSheetView, NSString, MMUIViewController, MMFinderLiveTask;

@interface MMFinderLiveSuperfanGroupPaymentHelper : NSObject <MMFinderLiveGenericPaymentSheetViewDelegate, WCCoinConsumeLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long lastSelectedIndex;
@property (weak, nonatomic) MMFinderLiveGenericPaymentSheetView *sheetView;
@property (nonatomic) unsigned long long subscriptionType;
@property (copy, nonatomic) id /* block */ onClickQuestionView;
@property (copy, nonatomic) id /* block */ onClickAgreement;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (copy, nonatomic) id /* block */ paySuccessCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)showPaymentViewAnimated:(BOOL)a0 resetToDefaultIndex:(BOOL)a1;
- (void)hidePaymentViewAnimated:(BOOL)a0;
- (void)paymentSheetViewWillClose:(id)a0;
- (void)paymentSheetView:(id)a0 didClickPayWithItem:(id)a1;
- (void)_followAnchorWithCompletion:(id /* block */)a0;
- (BOOL)isFollowAnchor;
- (void)_doJoinSuperfanWithType:(unsigned long long)a0 subscriptionInfo:(id)a1;
- (void)paymentSheetViewDidClickQuestionView:(id)a0;
- (void)paymentSheetView:(id)a0 didClickAgreementUrl:(id)a1;
- (void)buyOneMonthWithResp:(id)a0;
- (void)monthlySubscribeWithResp:(id)a0;
- (void)checkSuperfanStateWithCheckCount:(id)a0;
- (id)genSubscribeParameterWithResp:(id)a0;
- (id)genConsumeParameterWithResp:(id)a0;
- (id)genConsumeParameterWithMode:(unsigned long long)a0 resp:(id)a1;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void).cxx_destruct;

@end
