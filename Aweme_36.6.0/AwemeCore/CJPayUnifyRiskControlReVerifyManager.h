@class CJPayUnifyPayProcessModel, NSDictionary, CJPayOrderConfirmResponse;

@interface CJPayUnifyRiskControlReVerifyManager : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CJPayUnifyPayProcessModel *processModel;
@property (copy, nonatomic) NSDictionary *defaultDoubleCheckData;
@property (copy, nonatomic) NSDictionary *checkDataToUnifyCenter;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (copy, nonatomic) id /* block */ trackBlock;

- (void)event:(id)a0 params:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (void)p_resultWithCancelAndException:(unsigned long long)a0;
- (void)handleVerifyResponse:(id)a0 withProcessModel:(id)a1 withCompletion:(id /* block */)a2;
- (void)p_startSecondaryVerify:(id)a0;
- (void)p_monitorUnifyVerifyExceptionWithMsg:(id)a0;
- (void)p_popUpRestrictionLynxPage:(id)a0 confirmResponse:(id)a1;
- (BOOL)p_checkUnifyVerifyCenterRequest:(id)a0;
- (void)p_startUnifyVerifyWithResponse:(id)a0;
- (void)p_callbackSuccessWithResultModel:(id)a0;
- (BOOL)p_needExtraCertSign;
- (id)p_unifyExtraDataWithModel:(id)a0;
- (void).cxx_destruct;

@end
