@class CJPayHalfVerifySMSViewController, CJPaySignCardManager;

@interface CJPayUnifyPreVerifyItemSignCard : CJPayUnifyPreVerifyItemBase

@property (retain, nonatomic) CJPayHalfVerifySMSViewController *verifySMSVC;
@property (retain, nonatomic) CJPaySignCardManager *signCardManager;

- (id)checkType;
- (id)checkTypeName;
- (BOOL)handleConfirmResponse:(id)a0;
- (void)startVerifyWithParams:(id)a0;
- (void)trackForVerifyResult:(id)a0;
- (unsigned long long)p_preVerifyResultTypeWithSignCardResultModel:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)verifyType;

@end
