@class NSString, GetUrlInfoReqSession, WCPayInterceptWinLogic;

@interface WCPayMerchantPayControlLogic : WCPayControlLogic <WCPayMerchantPayGetQRCodeInfoCgiDelegate, WCPayMerchantPayPlaceOrderCgiDelegate, WCPayMerchantPayCheckPayCgiDelegate, MMWebViewDelegate, MMUseCaseCallback>

@property (retain, nonatomic) NSString *m_nsQrcodeUrl;
@property (retain, nonatomic) GetUrlInfoReqSession *scanCodeSessionInfo;
@property (nonatomic) unsigned int getA8keyScene;
@property (retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic;
@property (nonatomic) BOOL isStopLogicWhenCloseWebview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 qrCodeUrl:(id)a1 getA8keyScene:(unsigned int)a2 scanCodeSessionInfo:(id)a3;
- (void)startLogic;
- (void)startGetQRCodeInfo;
- (void)onWCPayMerchantPayViewControllerBack;
- (void)onWCPayMerchantPayGetQRCodeInfo:(id)a0;
- (void)onWCPayMerchantPayGetQRCodeInfoError:(long long)a0 errorMsg:(id)a1;
- (void)webViewDidReturn:(id)a0;
- (void)onWCPayMerchantPayCheckPayError:(long long)a0 errorMsg:(id)a1;
- (void)onWCPayMerchantPayViewControllerClickPlaceOrder;
- (void)startPlaceOrder;
- (void)onWCPayMerchantPayPlaceOrder:(id)a0;
- (void)doInWxAppPay:(id)a0;
- (void)startPayCheck:(int)a0;
- (void)call:(id)a0;
- (void)onWCPayMerchantPayPlaceOrderError:(long long)a0 errorMsg:(id)a1;
- (void).cxx_destruct;

@end
