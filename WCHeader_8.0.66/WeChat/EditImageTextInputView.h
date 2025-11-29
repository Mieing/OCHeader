@class UIView, NSString, MMUIButton, EditImageColorSquareBar, UIColor, EditVideoSecondCutPromotionButton, UIButton, MMUIView, EditImageTextInputViewParams, UILabel, EditImageTextView;
@protocol EditImageTextInputDelegate;

@interface EditImageTextInputView : MMUIView <textViewDelegate, UITextViewDelegate, IUiUtilExt, EditImageColorSquareBarDelegate> {
    EditImageTextView *_inputView;
    MMUIButton *_cancelBtn;
    UIView *_colorBarContainerView;
    EditImageColorSquareBar *_colorBar;
    UIColor *_textColor;
    MMUIView *_translucentView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editViewFrame;
    EditVideoSecondCutPromotionButton *_secondCutPromotionButton;
    EditImageTextInputView *_tempTextInputView;
}

@property (retain, nonatomic) EditImageTextInputViewParams *params;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UILabel *validationErrorLabel;
@property (nonatomic) unsigned long long textStyle;
@property (weak, nonatomic) id<EditImageTextInputDelegate> _delegate;
@property (retain, nonatomic) MMUIButton *confirmBtn;
@property (retain, nonatomic) UIButton *textStyleBtn;
@property (copy, nonatomic) NSString *_textStr;
@property (retain, nonatomic) UIView *_textView;
@property (nonatomic) double textHighlightAlpha;
@property (nonatomic) BOOL enableMultiline;
@property (nonatomic) unsigned long long maxNumberOfLines;
@property (nonatomic) unsigned long long maxNumberOfCharacters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEditViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDelegate:(id)a0 withParams:(id)a1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)addBlur;
- (void)addTranslucent;
- (void)didMoveToSuperview;
- (void)dropDownAndRemove;
- (void)onCancel;
- (void)onConfirm;
- (id)getTextStyleIconName;
- (id)getTextStyleAccessibilityStr;
- (void)onTextStyleChange;
- (unsigned long long)getNextStyle;
- (unsigned long long)_getDefauleNextStyle;
- (unsigned long long)_getOrderNextStyle;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)onMainWindowFrameChanged;
- (void)setSelectedColorFromSquareBar:(id)a0;
- (void)adjustColorBarYPosition;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)updateViewsOnKeyboardHeightChange;
- (void)keyboardDidHide:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
