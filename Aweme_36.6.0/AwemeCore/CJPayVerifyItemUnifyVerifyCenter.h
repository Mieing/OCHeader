@class NSDictionary, CJPayOrderConfirmResponse;

@interface CJPayVerifyItemUnifyVerifyCenter : CJPayVerifyItem

@property (copy, nonatomic) NSDictionary *defaultDoubleCheckData;
@property (copy, nonatomic) NSDictionary *checkDataToUnifyCenter;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;

- (void)event:(id)a0 params:(id)a1;
- (void)handleVerifyResponse:(id)a0;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (void)p_resultWithCancelAndException:(id)a0;
- (void)p_startSecondaryVerify:(id)a0;
- (void)p_monitorUnifyVerifyExceptionWithMsg:(id)a0;
- (void)p_popUpRestrictionLynxPage:(id)a0 confirmResponse:(id)a1;
- (BOOL)p_checkUnifyVerifyCenterRequest:(id)a0;
- (void)p_startUnifyVerifyWithResponse:(id)a0;
- (BOOL)p_needExtraCertSign;
- (id)p_unifyExtraDataWithModel:(id)a0;
- (void)notifyVerifyCancel;
- (BOOL)p_isLastConfirmVerifyTypePassword;
- (id)p_buildSecondaryConfirmRequestParam:(id)a0;
- (void)p_showKeyBoardIfAvailable:(id)a0;
- (void).cxx_destruct;

@end
