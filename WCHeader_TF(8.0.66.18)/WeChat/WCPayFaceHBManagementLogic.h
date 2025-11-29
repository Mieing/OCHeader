@class WCPayControlData, NSString, HBBusinessCallbackCgi, WCPayFaceHBCgi, FFHBRequestResp, WCPayInterceptWinLogic, WCPayPayMoneyLogic;
@protocol WCPayFaceHBManagementLogicDelegate;

@interface WCPayFaceHBManagementLogic : WCRedEnvelopesControlLogic <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCPayFaceHBCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, MMTipsViewControllerDelegate, HBBusinessCallbackCgiDelegate, MMUseCaseCallback> {
    id<WCPayFaceHBManagementLogicDelegate> m_delegate;
    WCPayFaceHBCgi *m_faceHBCgi;
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    unsigned long long m_totalAmount;
    unsigned int m_totalNum;
}

@property (retain, nonatomic) FFHBRequestResp *m_prepayResp;
@property (retain, nonatomic) HBBusinessCallbackCgi *hbBusinessCallbackCgi;
@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (nonatomic) int m_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)GenRedEnvelopesPayRequest:(id)a0;
- (BOOL)gotoViewController:(id)a0;
- (void)didWCPayFaceHBCgi:(id)a0 Response:(id)a1 Error:(id)a2 Key:(id)a3;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnQueryRedEnvelopesUserInfo:(id)a0 isCahceInfo:(BOOL)a1 Error:(id)a2;
- (void)OnGenRedEnvelopesPayRequest:(id)a0 Error:(id)a1;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)OnGenH5RedEnvelopesPayRequest:(id)a0 Error:(id)a1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)a0;
- (void)OnClickNotReceivedButton;
- (void)onFailMsg:(id)a0;
- (void)OnClickViewHBHistory;
- (void)queryHBQrCodeInfo;
- (void)onHBBusinessCallbackCgiResp:(id)a0;
- (void)onHBBusinessCallbackCgiError:(id)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
