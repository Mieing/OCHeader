@class UILabel, AWEShadowGradientTextView, NSString;

@interface AWEMateApplicationReplyTextViewController : AFDTextInputAlertController <UITextFieldDelegate>

@property (retain, nonatomic) AWEShadowGradientTextView *textView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL showTipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)replyUser:(id)a0 mateApplyId:(id)a1 completion:(id /* block */)a2;
- (id)messagesModelString:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)viewDidLoad;

@end
