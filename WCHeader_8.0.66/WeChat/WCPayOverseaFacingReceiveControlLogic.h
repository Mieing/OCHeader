@class WCPayOverseaGetFacingReceiveQRCodeResponse, NSString, WCPayOverseaGetFacingReceiveQRCodeCgi;

@interface WCPayOverseaFacingReceiveControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate, MMWebViewDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate, WCPayOverseaGetFacingReceiveQRCodeCgiDelegate> {
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
}

@property (retain, nonatomic) WCPayOverseaGetFacingReceiveQRCodeCgi *m_getQRCodeCgi;
@property (retain, nonatomic) WCPayOverseaGetFacingReceiveQRCodeResponse *m_getQRCodeResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayOverseaGetFacingReceiveFixQRCodeResponseOK:(id)a0;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseCgiError:(int)a0 errorMsg:(id)a1;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseBizError:(id)a0 errorCode:(int)a1 errorMsg:(id)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeLocalResponse:(id)a0;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeResponseOK:(id)a0;
- (void)checkShowOverseaFacingReceiveFirstTips:(id)a0;
- (id)facingReceiveMultipleWalletTitle:(id)a0;
- (void)OnGetLocalPayCardList:(id)a0 UsrVerifiedInfo:(id)a1 SwicthInfo:(id)a2 BalanceInfo:(id)a3 NoticeInfo:(id)a4 loanEntryInfo:(id)a5 LqtInfo:(id)a6;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)onWebViewWillClose:(id)a0;
- (void)webViewReturn:(id)a0;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (int)getCurrentFacingReceiveCodeType;
- (void)userChangeFacingReceiveCodeType:(int)a0;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)a0 isFixedCode:(BOOL)a1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)a0 Description:(id)a1;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(BOOL)a0;
- (void)OnNotifyOverseaAddFacingReceiveMoneyPayerInfo:(id)a0;
- (void)playVibration;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (void).cxx_destruct;

@end
