@class NSString;

@interface WCAccountThirdAppRegisterControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, MMImageLoaderObserver, WCBaseControlMgrExt, MMKernelExt, PBMessageObserverDelegate> {
    BOOL m_hasStartDownloadImage;
    BOOL m_fromLoginToReg;
    unsigned int m_lastPhoneRegLogicTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ReportThirdAppLoginRegWithType:(int)a0 action:(unsigned long long)a1;

- (void)dealloc;
- (void)startLogic;
- (void)callSuccessLogic;
- (void)callGotoLoginLogicWithToken:(id)a0;
- (void)callFailLogicWithErrMsg:(id)a0;
- (void)callCancelLogic;
- (void)reportAction:(unsigned long long)a0;
- (void)startFacebookAuth;
- (void)onFBDidNotLogin:(BOOL)a0;
- (void)onLoginFacebookBegan:(id)a0;
- (void)startThirdVerifyToken:(id)a0;
- (void)handleThirdAppVerifyReturn:(id)a0;
- (void)startGetThirdAppInfo;
- (void)startDownloadHeadImageWithUrl:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewRegOK;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;

@end
