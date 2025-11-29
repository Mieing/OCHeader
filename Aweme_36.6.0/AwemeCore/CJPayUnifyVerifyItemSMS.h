@class CJPayUnifyHalfSMSVerifyViewController;

@interface CJPayUnifyVerifyItemSMS : CJPayUnifyBaseVerifyItem

@property (retain, nonatomic) CJPayUnifyHalfSMSVerifyViewController *smsVerifyVC;
@property (nonatomic) BOOL hasNextItem;

- (id)getTrackExtraParams;
- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_startVerifySMS:(id)a0;
- (void)p_dismissVCWithCompletion:(id /* block */)a0;
- (id)p_buttonInfoActions:(id)a0;
- (void).cxx_destruct;

@end
