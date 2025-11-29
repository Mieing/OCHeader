@class NSString, NSDictionary, WCPayGenMallPrePayCgi, WCPayPayMoneyLogic, GenMallPrepayResponse;
@protocol WCPayMallRequestPaymentControlLogicDelegate;

@interface WCPayMallRequestPaymentControlLogic : WCPayControlLogic <WCPayPayMoneyLogicDelegate, WCPayGenMallPrePayCgiDelegate, WCBaseControlLogicDeleagte>

@property (retain, nonatomic) NSDictionary *jsParams;
@property (retain, nonatomic) WCPayGenMallPrePayCgi *prepayCgi;
@property (retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic;
@property (retain, nonatomic) GenMallPrepayResponse *mallPrepayResp;
@property (weak, nonatomic) id<WCPayMallRequestPaymentControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSParam:(id)a0;
- (void)startLogic;
- (void)onGetMallPrePayResp:(id)a0;
- (void)clickPrePayErrorAlert;
- (void)onPayMoneyLogicDidStop;
- (BOOL)gotoViewController:(id)a0;
- (void).cxx_destruct;

@end
