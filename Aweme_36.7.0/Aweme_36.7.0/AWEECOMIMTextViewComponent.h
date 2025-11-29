@class UITextView, NSString, UILabel, UIView;
@protocol AWEECOMIMTextViewComponentDelegate;

@interface AWEECOMIMTextViewComponent : UIView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) BOOL countSupported;
@property (nonatomic) BOOL overLengthSupported;
@property (nonatomic) double minTextHeight;
@property (weak, nonatomic) id<AWEECOMIMTextViewComponentDelegate> delegate;
@property (copy, nonatomic) id /* block */ validationBlock;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) long long keybordType;
@property (nonatomic) long long returnKeyType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *errorTip;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double extraBottomSpace;
@property (nonatomic) BOOL editable;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) BOOL validateWhenFocusChanged;
@property (nonatomic) BOOL dismissKeyBoardWhenReturn;
@property (nonatomic) BOOL limitCountHighlight;
@property (nonatomic, getter=isShowingBottomLine) BOOL showBottomLine;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textViewWithOption:(unsigned long long)a0 maxLength:(unsigned long long)a1 minTextHeight:(double)a2;

- (BOOL)showBottomLine;
- (void)updateCountLabelShow:(BOOL)a0;
- (BOOL)isFristResponder;
- (void)configCountLabel;
- (void)adjustIfValid:(BOOL)a0;
- (id)initWithMinTextHeight:(double)a0;
- (void)resetMaxLength:(unsigned long long)a0;
- (void)onClearButtonClicked;
- (void).cxx_destruct;
- (void)validate;
- (void)endEditing;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)startEditing;

@end
