@interface CJPayBioManager : NSObject

+ (id)buildPwdDicWithModel:(id)a0 lastPWD:(id)a1;
+ (id)getSafeModelBy:(id)a0;
+ (id)p_getTokenStrWithUid:(id)a0 aid:(id)a1;
+ (id)getSupportPwdType;
+ (void)saveTokenStrInKey:(id)a0 uid:(id)a1;
+ (void)trackEvent:(id)a0 params:(id)a1 requestModel:(id)a2;
+ (BOOL)p_isSkipPWDWithVerifyType:(id)a0;
+ (void)p_verifyTouchIDAndEnableBioPaymentWithPassword:(id)a0 passwordVC:(id)a1 requestModel:(id)a2 viewModel:(id)a3 closePageBlock:(id /* block */)a4;
+ (BOOL)p_isSupportRecogFaceWithVerifyType:(id)a0;
+ (void)p_enableBioPaymentWithPassword:(id)a0 passwordVC:(id)a1 requestModel:(id)a2 viewModel:(id)a3 closePageBlock:(id /* block */)a4;
+ (void)verifyTouchID:(id /* block */)a0;
+ (BOOL)p_isVerifyPWDOnNewProcessWithVerifyType:(id)a0 password:(id)a1;
+ (BOOL)isValidWithUid:(id)a0;
+ (id)generatorTOTPToken:(id)a0 dateCorrect:(double)a1 digits:(unsigned long long)a2 period:(long long)a3;
+ (void)checkBioPayment:(id)a0 completion:(id /* block */)a1;
+ (void)openBioPaymentOnVC:(id)a0 withBioRequestDic:(id)a1 completionBlock:(id /* block */)a2;
+ (void)openBioPayment:(id)a0 findUrl:(id)a1 completion:(id /* block */)a2;
+ (void)requestOpenBioPayment:(id)a0 trackDelegate:(id)a1 completion:(id /* block */)a2;
+ (void)closeBioPayment:(id)a0 completion:(id /* block */)a1;

@end
