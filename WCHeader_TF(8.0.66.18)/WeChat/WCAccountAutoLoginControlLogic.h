@class NSString, WCAccountGraphicVerifyControlLogic, MMUIWindow, WCAccountManualAuthControlLogic, WCAccountControlData, CountDownTipViewController;
@protocol WCAccountAutoLoginControlLogicDelegate;

@interface WCAccountAutoLoginControlLogic : WCBaseControlLogic <MMWebViewDelegate, WCAccountGraphicVerifyControlLogicDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, WCAccountManualAuthControlLogicDelegate, MMUIViewControllerDelegate> {
    WCAccountControlData *m_data;
    MMUIWindow *m_window;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id<WCAccountAutoLoginControlLogicDelegate> m_delegate;
    unsigned int m_idc_redirect_count;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_mmtls_set_count;
    BOOL m_bSessionKeyNeedECDHDecrypt;
    BOOL m_bStopCloseAcct;
    CountDownTipViewController *m_tipView;
    unsigned long long m_ui64BeginTime;
    BOOL m_bHasKickout;
    id /* block */ m_quitCompleteBlock;
}

@property BOOL isDisasterAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)init;
- (void)stopLogic:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)startAutoAuth:(id)a0;
- (id)genAutoAuthRequest:(BOOL)a0;
- (id)genAutoAuthRequest;
- (id)getViewController;
- (void)startLogic;
- (void)closeMainFrame;
- (void)endCloseMainFrame;
- (void)stopLogicWithKickOut;
- (void)kickOut;
- (void)openFirstView;
- (void)closeFirstView;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)a0;
- (void)onGraphicVerifyControlLogicReturn:(id)a0;
- (void)onErrorAction:(id)a0;
- (void)onAlertErrorAction:(id)a0;
- (void)stopLogicLoginRetry;
- (void)webViewReturn:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)showTipView;
- (void)showTipWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 countDown:(unsigned int)a3 errorInfo:(id)a4;
- (void)onStopCloseAcct;
- (void)handleAuthResponse:(id)a0;
- (void)HandleMessageReturn:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void).cxx_destruct;

@end
