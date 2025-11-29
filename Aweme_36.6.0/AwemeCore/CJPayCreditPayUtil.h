@interface CJPayCreditPayUtil : NSObject

+ (void)creditPayActiveWithJumpModel:(id)a0 realTradeAmount:(long long)a1 toastWhenFail:(BOOL)a2 extParams:(id)a3 completion:(id /* block */)a4;
+ (void)activateCreditPayWithStatus:(BOOL)a0 activateUrl:(id)a1 completion:(id /* block */)a2;
+ (void)p_openCreditScheme:(id)a0 callback:(id /* block */)a1;
+ (void)doCreditTargetActionWithPayInfo:(id)a0 completion:(id /* block */)a1;
+ (void)activateCreditPayWithPayInfo:(id)a0 completion:(id /* block */)a1;
+ (void)p_creditPayUnLockWithSchema:(id)a0 completion:(id /* block */)a1;
+ (void)creditPayActiveWithPayInfo:(id)a0 completion:(id /* block */)a1;

@end
