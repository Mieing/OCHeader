@interface CJPayUnifyPreVerifyItemBio : CJPayUnifyPreVerifyItemBase

@property (nonatomic) BOOL isOpenBioSuccess;
@property (copy, nonatomic) id /* block */ completeBlock;

- (id)checkType;
- (id)checkTypeName;
- (BOOL)handleConfirmResponse:(id)a0;
- (void)startVerifyWithParams:(id)a0;
- (id)p_buildBioSafeModel;
- (BOOL)p_checkModelValid:(id)a0;
- (BOOL)p_isUserOpenBio;
- (void)p_changeToPasswordVerifyWithTipsMsg:(id)a0 metricsError:(id)a1;
- (id)p_errorBioLockoutMsg;
- (BOOL)p_isBioOpenAndPay;
- (void)p_bioOpenAndPay;
- (id)p_buildResultModelWithType:(unsigned long long)a0 message:(id)a1;
- (void)p_bioWithSuccessBlock:(id /* block */)a0;
- (id)p_toastTextForBioVerifyFailed;
- (void)p_tryOpenBioPayment;
- (void)p_requestOpenBiopaymentWithCompletion:(id /* block */)a0;
- (id)p_buildParamsWithSafeModel:(id)a0;
- (id)p_buildBioPaymentOneTimePWD:(id)a0;
- (BOOL)isEnable;
- (unsigned long long)verifyType;

@end
