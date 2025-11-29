@class NSString, UITextField, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveAnchorCustomizeRewardTextOptionContentView : MMFinderLiveAnchorCustomizeRewardOptionContentViewBase <UITextFieldDelegate>

@property (retain, nonatomic) UIView *textFieldContainer;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) MMUIButton *textFieldConfirmButton;
@property (retain, nonatomic) MMUILabel *alertMessageLabel;
@property (nonatomic) long long maxTextLength;
@property (nonatomic) BOOL keyboardShowing;
@property (copy, nonatomic) id /* block */ isInputTextInvalid;
@property (copy, nonatomic) id /* block */ onInputTextChanged;
@property (copy, nonatomic) id /* block */ onInputTextConfirm;
@property (copy, nonatomic) id /* block */ onInputTextCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaxTextLength:(long long)a0;
- (void)initTextFieldContainer;
- (void)initTextField;
- (void)initTextFieldConfirmButton;
- (void)initAlertMessageLabel;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)setTextFeildInputText:(id)a0;
- (void)setAlertMessageWithString:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)onConfirmButtonClicked;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void)textFieldDidChangeContent:(id)a0;
- (id)clipString:(id)a0 byAsciiLengthLimit:(long long)a1;
- (double)contentPerferHeight;
- (void).cxx_destruct;

@end
