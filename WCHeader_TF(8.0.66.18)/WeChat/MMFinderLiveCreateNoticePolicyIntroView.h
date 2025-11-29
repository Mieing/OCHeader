@class RichTextView;

@interface MMFinderLiveCreateNoticePolicyIntroView : MMFinderLivePaymentPolicyIntroView

@property (retain, nonatomic) RichTextView *descLabel;

- (void)initUI;
- (void)changMode;
- (void)layoutCurrentUI;
- (void)updateDescLabel;
- (double)contentViewHeight;
- (void).cxx_destruct;

@end
