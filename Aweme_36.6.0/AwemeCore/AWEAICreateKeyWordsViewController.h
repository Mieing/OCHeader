@class UILabel, NSString, AWEAICreatePlaceholdTextView, UIView, AWEAICreateEffectsNaviView, UIButton;

@interface AWEAICreateKeyWordsViewController : AWEHalfScreenSuperViewController <UITextViewDelegate>

@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIView *textBgView;
@property (retain, nonatomic) AWEAICreatePlaceholdTextView *textView;
@property (retain, nonatomic) AWEAICreateEffectsNaviView *naviView;
@property (retain, nonatomic) UILabel *alertLabel;
@property (nonatomic) BOOL isLessThanSingleMaxLength;
@property (nonatomic) BOOL isValidInput;
@property (nonatomic) BOOL isLessThanMaxCustomKeywords;
@property (nonatomic) BOOL isLessThanTotalMaxLength;
@property (nonatomic) long long maxSingleLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL keyboardIsVisible;
@property (copy, nonatomic) NSString *selectedKeys;
@property (nonatomic) long long allowInputCount;
@property (copy, nonatomic) id /* block */ addKeywordsCallBackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)addObserverKeyBoard;
- (void)keyBoardDidShow:(id)a0;
- (void)keyBoardDidHide:(id)a0;
- (void)disableCompleteButton:(BOOL)a0;
- (BOOL)isInputRuleOnlyChinese:(id)a0;
- (void)setUpUIView;
- (void)completeButtonAction:(id)a0;
- (void)resetAllFlagValue;
- (BOOL)isInputRuleSupport:(id)a0;
- (void)outMaxCustomKeywords:(id)a0;
- (void)updateAlertandButtonStatus;
- (void)dismiss;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (double)containerHeight;
- (double)containerWidth;

@end
