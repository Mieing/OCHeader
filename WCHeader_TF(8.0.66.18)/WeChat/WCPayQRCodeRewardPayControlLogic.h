@class WCPayQRCodeRewardScanCodeCgi, WCPayQRCodeRewardPlaceOrderCgi, NSString, WCPayPayMoneyLogic, WCPayQRCodeRewardPayCheckCgi;
@protocol WCPayQRCodeRewardPayControlLogicDelegate;

@interface WCPayQRCodeRewardPayControlLogic : WCPayControlLogic <WCPayQRCodeRewardPayerDetailViewControllerDelegate, WCPayQRCodeRewardPayerConfirmViewControllerDelegate, WCPayQRCodeRewardEditMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte, WCPayQRCodeRewardScanCodeCgiDelegate, WCPayQRCodeRewardPlaceOrderCgiDelegate, WCPayQRCodeRewardPayCheckCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback>

@property (retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic;
@property (retain, nonatomic) WCPayQRCodeRewardScanCodeCgi *scanCodeCgi;
@property (retain, nonatomic) WCPayQRCodeRewardPlaceOrderCgi *placeOrderCgi;
@property (retain, nonatomic) WCPayQRCodeRewardPayCheckCgi *payCheckCgi;
@property (weak, nonatomic) id<WCPayQRCodeRewardPayControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLogic;
- (void)startLogic;
- (void)onPayerDetailViewControllerBack;
- (void)onPayerDetailViewControllerClickEditMoneyBtn;
- (void)onPayerDetailViewControllerClickAmount:(long long)a0;
- (void)onPayerConfirmViewControllerBack;
- (void)onPayerConfirmViewControllerConfirmWithPayerCommnet:(id)a0 shouldShowNickName:(BOOL)a1;
- (void)onEditMoneyViewControllerBack;
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)a0 comment:(id)a1 shouldShowNickName:(BOOL)a2;
- (void)sendScanCodeRequest;
- (void)onGetQRCodeRewardScanCodeCgiResp:(id)a0;
- (void)scanCodeAlertViewConfirmClick;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)handleGotoViewControllerAfterGetTransferContact;
- (void)sendRewardPrePayRequestWithAmount:(long long)a0 comment:(id)a1 isSelectAmount:(BOOL)a2 shouldShowNickName:(BOOL)a3;
- (void)onGetQRCodeRewardPlaceOrderResp:(id)a0;
- (void)continueToTransfer;
- (void)continueToTransfer:(BOOL)a0;
- (BOOL)gotoViewController:(id)a0;
- (void)onPayMoneyLogicSuccess;
- (void)onGetQRCodeRewardPayCheckCgiResp:(id)a0;
- (void)onPayMoneyLogicDidStop;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
