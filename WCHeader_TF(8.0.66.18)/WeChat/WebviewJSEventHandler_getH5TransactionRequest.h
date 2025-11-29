@class JSEvent, NSString, WCPayPayMoneyFromOverseaH5WalletLogic;

@interface WebviewJSEventHandler_getH5TransactionRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayPayMoneyFromOverseaH5WalletLogicDelegate, MMUseCaseCallback>

@property (nonatomic) BOOL closeWebAfterPayDetailBack;
@property (retain, nonatomic) WCPayPayMoneyFromOverseaH5WalletLogic *controlLogic;
@property (retain, nonatomic) JSEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)startKindaShowOrderDetail:(id)a0;
- (void)sendResult:(BOOL)a0 jsEvent:(id)a1;
- (void)showOrderDetail:(id)a0 complete:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)a0;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)a0;
- (id)getDiscountArray:(id)a0;
- (id)getActivityInfo:(id)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
