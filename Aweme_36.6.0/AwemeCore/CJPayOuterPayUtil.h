@interface CJPayOuterPayUtil : NSObject

+ (void)checkAuthParamsValid:(id)a0 completion:(id /* block */)a1;
+ (void)closeCashierDeskVC:(id)a0 signType:(long long)a1 jumpBackUrlStr:(id)a2 jumpBackUniversalLinkStr:(id)a3 jumpBackResult:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)checkPaymentParamsValid:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)dypayResultTypeWithErrorCode:(long long)a0;
+ (void)jumpBackUrlStr:(id)a0 jumpBackUniversalLinkStr:(id)a1 signType:(long long)a2 jumpBackResult:(unsigned long long)a3 trackDict:(id)a4 openUrlBlock:(id /* block */)a5;
+ (int)p_statusCodeByResult:(unsigned long long)a0;
+ (void)p_openUniversalLinkAndSchemeFailByResultCode:(id)a0 trackParams:(id)a1;
+ (BOOL)checkValidPackage:(id)a0;
+ (unsigned long long)dypayResultTypeWithOrderStatus:(unsigned long long)a0;

@end
