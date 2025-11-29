@class MMUITextField, UIFont, UIImageView, UIColor, UIView, NSString, MMUILabel;

@interface MMFinderLiveFansGroupInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *fansSignIconView;
@property (retain, nonatomic) MMUILabel *fansRankLabel;
@property (retain, nonatomic) MMUITextField *textField;
@property (nonatomic) BOOL isSetDefaultContent;
@property (nonatomic) unsigned long long maxInputWordCount;
@property (nonatomic) BOOL showFansGroupSign;
@property (retain, nonatomic) UIFont *inputTextFont;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (nonatomic) double contentCornerRadius;
@property (copy, nonatomic) id /* block */ inputChangedCallback;
@property (readonly, nonatomic) BOOL isIsInputFirstResponder;
@property (retain, nonatomic) NSString *inputText;
@property (nonatomic) double inputViewRightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutFansGroupSignView;
- (void)layoutFansRankLabel;
- (void)layoutTextField;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)a0;
- (void)handleForInputTextChanged:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)updateInputPlaceHolder:(id)a0 font:(id)a1 color:(id)a2;
- (void)updateCursorColor:(id)a0;
- (void)checkInputIsEmpty;
- (void)setDefaultInputContent;
- (void)clearDefaultInputContent;
- (void)resignInputFirstResponder;
- (void)becomeInputFirstResponder;
- (void).cxx_destruct;

@end
