@class UIView, NSString, PatSuffixWrap, EmoticonBoardView, MMGrowTextView, UIButton, ModifyPatSuffixLogic, WCSingleEmoticonInputView, MMUILabel, WCInputController, UIImpactFeedbackGenerator;

@interface ModifyPatSuffixPageSheetViewController : MMPageSheetBaseViewController <ModifyPatSuffixLogicDelegate, WCCommonInputViewDelegate, InputControllerDelegate>

@property (retain, nonatomic) MMUILabel *prefixLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (retain, nonatomic) UIView *inputBackgroundView;
@property (retain, nonatomic) WCSingleEmoticonInputView *inputBar;
@property (retain, nonatomic) WCInputController *inputController;
@property (nonatomic) double currentInputViewHeight;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) PatSuffixWrap *selfPatSuffixWrap;
@property (retain, nonatomic) ModifyPatSuffixLogic *modifyPatSuffixLogic;
@property (retain, nonatomic) ModifyPatSuffixPageSheetViewController *viewController;
@property (copy, nonatomic) id /* block */ beginCommitHandler;
@property (copy, nonatomic) id /* block */ endCommitHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (double)getVisibleHeight;
- (double)pageSheetContentWidth;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)configPageSheet;
- (void)configData;
- (void)configDetailView;
- (void)configInputView;
- (void)updateDetailViewLayoutAnimated:(BOOL)a0;
- (void)changeToExceedMaxLength;
- (void)changeBackDescription;
- (void)checkDone;
- (void)onTapDoneButton;
- (unsigned int)getMaxPatSuffixLength;
- (void)reportAction:(unsigned long long)a0 errorCode:(int)a1;
- (void)didCommitText:(id)a0;
- (void)didCommitEmptyText;
- (void)textDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)onInputModeChangingTo:(long long)a0;
- (void)keyboardWillShow;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)textViewTextDidExceedMaxLength;
- (void)updateCurrentInputViewHeightAnimated:(id)a0;
- (void)onInputViewExpressionButtonClicked:(id)a0;
- (void)OnModifyPatSuffixWithResult:(unsigned int)a0 errorMsgTitle:(id)a1 errorMsgContent:(id)a2 errorCode:(int)a3;
- (void).cxx_destruct;

@end
