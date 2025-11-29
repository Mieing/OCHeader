@class UITextView, NSString, UIImageView, UILabel, UIButton;

@interface AWEMusicEditTitleViewController : AWEMusicEditTitleBaseViewController <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInputing;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)updateInputHintStatus;
- (void)doneButtonClick:(id)a0;
- (void)cleanButtonClick:(id)a0;
- (BOOL)checkAndReplaceIllegalCharactersInMutableText:(id)a0;
- (BOOL)trimString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
