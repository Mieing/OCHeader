@class NSString, WCPayPayMoneyLogic;
@protocol WCPayPlathbPayMoneyLogicDelegate;

@interface WCPayPlathbPayMoneyLogic : WCPayControlLogic <WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte>

@property (weak, nonatomic) id<WCPayPlathbPayMoneyLogicDelegate> delegate;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) WCPayPayMoneyLogic *paymoneyLogic;
@property (nonatomic) BOOL bIsPayMoneySucc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPrepayId:(id)a0 delegate:(id)a1;
- (void)stopLogic;
- (void)startLogic;
- (void)onPayMoneyLogicDidStop;
- (BOOL)gotoViewController:(id)a0;
- (void).cxx_destruct;

@end
