@class WCPayGetLotteryCgi, NSString, WCPayFollowCardBDMchCgi, CallbackRetryConf, NSMutableDictionary, WCPayDrawLotteryCgi, MMVoidCallback, MMVoidITransmitKvDataCallback;
@protocol WCPayPayMoneyFromOverseaH5WalletLogicDelegate;

@interface WCPayPayMoneyFromOverseaH5WalletLogic : WCPayControlLogic <MMUseCaseCallback, WCBaseControlMgrExt, WCPayPaidOrderDetailViewControllerDelegate, WCPayDrawLotteryCgiDelegate, WCPayGetLotteryCgiDelegate, MMWebViewDelegate> {
    NSString *m_nsPayGateUrl;
    CallbackRetryConf *m_oCallbackRetryConf;
    unsigned int m_currentRetryCount;
    BOOL m_bNeedDialog;
    NSString *m_nsDialogText;
    BOOL m_bIsPending;
    int m_enPayScene;
    WCPayDrawLotteryCgi *m_oDrawLotteryCgi;
    WCPayGetLotteryCgi *m_oGetLotteryCgi;
    NSMutableDictionary *m_oGetPaidOrderDetailInfo;
}

@property (retain, nonatomic) WCPayFollowCardBDMchCgi *followMchCgi;
@property (nonatomic) BOOL cancelByOpenApi;
@property (weak, nonatomic) id<WCPayPayMoneyFromOverseaH5WalletLogicDelegate> logicDelegate;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *m_successCallback;
@property (retain, nonatomic) MMVoidCallback *m_cancelCallback;
@property (retain, nonatomic) MMVoidCallback *m_failCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 Data:(id)a1;
- (void)startLogic;
- (void)showWebViewControllerWithURL;
- (void)webViewReturn:(id)a0;
- (BOOL)onKindaGetPaidOrderDetailJsApiInvoke:(id)a0;
- (void)onGetPaidOrderDetailJsApiInvoke:(id)a0;
- (void)OnAuthenticationPay:(id)a0 PayStatus:(id)a1 Error:(id)a2;
- (void)retryGetPaidOrderDetailAgain;
- (void)OnGetPaidOrderDetailNetError:(id)a0;
- (void)mergePaidOrderDetailData:(id)a0;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)a0;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)a0;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)a0;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)a0;
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(id)a0 stateBefore:(unsigned int)a1 stateAfter:(unsigned int)a2;
- (void)OnDrawLotteryRepsonseOK:(id)a0;
- (void)OnDrawLotteryRepsonseError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnGetLotteryRepsonseOK:(id)a0;
- (void)OnGetLotteryRepsonseError:(id)a0 errorCode:(unsigned int)a1;
- (void)onGetPaidOrderDetailFail;
- (void)onGetPaidOrderDetailCancel;
- (void)onGetPaidOrderDetailSuccess:(id)a0;
- (void)stopLogic;
- (void)markCancelByOpenApi;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
