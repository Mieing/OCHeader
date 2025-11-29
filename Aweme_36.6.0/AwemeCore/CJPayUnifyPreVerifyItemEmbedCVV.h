@class CJPayOrderConfirmResponse, NSString, CJPayUnifyPreVerifyCVVView;

@interface CJPayUnifyPreVerifyItemEmbedCVV : CJPayUnifyPreVerifyItemBase

@property (retain, nonatomic) CJPayUnifyPreVerifyCVVView *cvvView;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (copy, nonatomic) NSString *tipsMsg;
@property (copy, nonatomic) NSString *lastInputCVV;
@property (nonatomic) long long cvvInputCompleteTimes;

- (id)checkType;
- (void)p_trackEventName:(id)a0 params:(id)a1;
- (id)checkTypeName;
- (BOOL)handleConfirmResponse:(id)a0;
- (id)buildPreVerifyViewWithParams:(id)a0 inputCompletionBlock:(id /* block */)a1;
- (void)startVerifyWithParams:(id)a0;
- (BOOL)isEmbed;
- (void)trackForVerifyResult:(id)a0;
- (void)p_openCVVTipsPage;
- (void)p_completeCVVInputWithContent:(id)a0;
- (void)p_btmTrackEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (id)p_createCVVTipsImageView;
- (void)p_submitConfirmRequestWithCVV:(id)a0;
- (id)p_buildCVVParamsWithInputStr:(id)a0;
- (void)p_callBackWithResultType:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)verifyType;

@end
