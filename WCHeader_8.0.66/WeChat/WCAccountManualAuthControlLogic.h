@class UnifyAuthResponse, NSString, WCAccountErrorHandleLogic, WCAccountGraphicVerifyControlLogic;
@protocol WCAccountManualAuthControlLogicDelegate;

@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <MMWebViewDelegate, WCAccountGraphicVerifyControlLogicDelegate, WCAccountPasswordInputViewControllerDelegate, PBMessageObserverDelegate> {
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    id<WCAccountManualAuthControlLogicDelegate> m_delegate;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_idc_redirect_count;
    unsigned int m_mmtls_set_count;
    BOOL m_bFromAutoAuth;
    BOOL m_bSessionKeyNeedECDHDecrypt;
    BOOL m_bStopCloseAcct;
    unsigned long long m_ui64BeginTime;
    UnifyAuthResponse *_cacheResponse;
}

@property (retain, nonatomic) WCAccountErrorHandleLogic *passwordInputErrorLogic;
@property (nonatomic) unsigned int m_uiCGIScene;
@property (nonatomic) BOOL m_bDontFillWTBuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)startManualAuth:(id)a0;
- (id)genManualAuthRequest:(BOOL)a0;
- (id)genManualAuthRequest;
- (void)startLogic;
- (void)startLogicFromAutoAuth;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)a0;
- (void)onGraphicVerifyControlLogicReturn:(id)a0;
- (void)onStopLogic;
- (void)onStopCloseAcct;
- (void)handleAuthResponse:(id)a0;
- (void)handleAuthResponseOK:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onErrorHandleLogicDone;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)a0;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)onPasswordInputViewControllerBack:(id)a0;
- (void)onPasswordInputViewControllerLoginWithPassword:(id)a0;
- (void).cxx_destruct;

@end
