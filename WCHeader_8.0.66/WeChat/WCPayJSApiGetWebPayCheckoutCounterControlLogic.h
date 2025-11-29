@class NSString, JSEvent, UIView;
@protocol WCPayCheckoutCounterLogicDelegate;

@interface WCPayJSApiGetWebPayCheckoutCounterControlLogic : WCPayControlLogic <MMUseCaseCallback, WCPayVerifyPayCardViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayAvaliablePayCardListViewDelegate, IWCPayControlLogicExt> {
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    int m_getOrderScene;
    NSString *m_nsErrDesc;
}

@property (retain, nonatomic) UIView *m_deskView;
@property (retain, nonatomic) NSString *kindaPayBindSerial;
@property (weak, nonatomic) id<WCPayCheckoutCounterLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)removeDesk;
- (void)startLogic;
- (void)dealloc;
- (void)stopLogic;
- (void)checkStopLogic;
- (void)onOrderPayConfirmViewPay:(id)a0;
- (void)doAuthenticationPayWithPwd:(id)a0 isTouchIDAuth:(BOOL)a1;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewCancel;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)a0;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)a0;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)a0;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)a0;
- (void)VerifyPayCardAgain:(id)a0;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)OnGetWebPayOrderDetailInfo:(id)a0 BindQueryInfo:(id)a1 Error:(id)a2;
- (void)OnGetCheckPayPwdByToken:(id)a0 Error:(id)a1;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)a0 Error:(id)a1;
- (void)OnFinishedWCPayLogic:(id)a0 CompleteStatus:(int)a1;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
