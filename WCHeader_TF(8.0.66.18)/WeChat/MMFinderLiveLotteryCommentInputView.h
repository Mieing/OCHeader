@class MMUITextField, NSString, CAShapeLayer, UIVisualEffectView, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveLotteryCommentInputView : UIView <UITextFieldDelegate>

@property (copy, nonatomic) id /* block */ lotteryCommentInputDoneCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ openedCallback;
@property (copy, nonatomic) id /* block */ closedCallback;
@property (retain, nonatomic) id extraInfo;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *maskingView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIVisualEffectView *visualEfView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) MMUILabel *wordsCountTipsLabel;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic) BOOL isOpening;
@property (nonatomic) unsigned int maxInputWordCount;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) double contentBottomWhenKeyboardShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initUI;
- (void)updateDoneButtonStyle;
- (void)layoutUI;
- (void)layoutWordsCountTipsLabel;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (void)close;
- (void)closeWithAnimation:(BOOL)a0;
- (void)openWithAnimation:(BOOL)a0;
- (void)openWithBecomeFirstResponser;
- (void)updateDoneButtonEnableStatus;
- (void)onDoneButtonClicked:(id)a0;
- (void)onCloseButtonClicked:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)updateWordCountForTextFieldChange;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)changeCommentInputLayout:(id)a0 isShow:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
