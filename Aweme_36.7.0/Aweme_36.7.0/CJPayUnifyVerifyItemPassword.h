@class CJPayUnifyHalfPassVerifyViewController, NSString;

@interface CJPayUnifyVerifyItemPassword : CJPayUnifyBaseVerifyItem

@property (weak, nonatomic) CJPayUnifyHalfPassVerifyViewController *passVerifyVC;
@property (nonatomic) BOOL reopenBio;
@property (copy, nonatomic) NSString *passwordStr;

- (id)p_buttonInfoActions;
- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)startVerifyWithPasswordStr:(id)a0 params:(id)a1;
- (void)p_resetProperties;
- (id)buildReqParamsWithPasswordStr:(id)a0 params:(id)a1;
- (void)doPasswordVerifyRequestWithParams:(id)a0 startTime:(double)a1;
- (void)hideKeyboardAndStartLoadingWithTitle:(id)a0;
- (void)p_reopenBioWithPassword:(id)a0;
- (void).cxx_destruct;

@end
