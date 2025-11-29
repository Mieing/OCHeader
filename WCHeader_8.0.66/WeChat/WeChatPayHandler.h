@class NSString, WCPayOpenApiParamter, NSURL, WCPayTransferMoneyControlLogic;

@interface WeChatPayHandler : NSObject <WCBaseControlMgrExt, IPreEnterWechatLogicExt> {
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_bundleId;
    NSString *m_universalLink;
    NSString *m_nsWapUrl;
}

@property (retain, nonatomic) WCPayOpenApiParamter *openApiParam;
@property (retain, nonatomic) WCPayTransferMoneyControlLogic *transferMoneyControlLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportStartWeChatPayFromApp;
- (void)reportStartWeChatPayFromAppNotLogin;
- (void)reportStartWeChatPayFromAppHasLogin;
- (void)reportStartWeChatPayFromAppAfterLogin;
- (void)reportStartWeChatJointPayFromApp;
- (void)reportStartWeChatJointPayFromAppNotLogin;
- (void)reportStartWeChatJointPayFromAppHasLogin;
- (void)reportStartWeChatJointPayFromAppAfterLogin;
- (void)reportStartWeChatQrCodePayFromAppAfterLogin;
- (void)startWeChatPay:(id)a0;
- (void)startWeChatJointPay:(id)a0;
- (void)startWapWechatPayWithPayInfo:(id)a0 bundleID:(id)a1;
- (void)startWeChatQRCodePay:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)cancelWeChatPay;
- (void)onPreEnterWechatDone;
- (id)parseURLParams:(id)a0;
- (void)createWeChatePay;
- (void)createWeChatJointPay;
- (void)createWapWechatPay;
- (void).cxx_destruct;

@end
