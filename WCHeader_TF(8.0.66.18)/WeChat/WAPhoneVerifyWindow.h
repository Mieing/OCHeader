@class WAHiddenTextField, NSString, NSMutableArray, NSMutableString, UIView, UILabel, UIButton;
@protocol IWARichTextViewHelper, WAPhoneVerifyWindowDelegate;

@interface WAPhoneVerifyWindow : UIView <WARichTextViewHelperDelegate, WACustomKeyboardDelegate, UITextFieldDelegate> {
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_countDown;
    UIButton *_closeButton;
    NSMutableArray *_numLabels;
    NSMutableString *_input;
    int _secCount;
}

@property (nonatomic) long long inputCount;
@property (retain, nonatomic) NSString *phoneNum;
@property (retain, nonatomic) id<IWARichTextViewHelper> richTextHelper;
@property (retain, nonatomic) WAHiddenTextField *confirmCodeTF;
@property (weak, nonatomic) id<WAPhoneVerifyWindowDelegate> verifyWindowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupWindow:(id)a0 phone:(id)a1 inputCount:(long long)a2;

- (void)closeWindow;
- (void)initView;
- (void)countDown;
- (void)onClose:(id)a0;
- (void)onLinkClicked:(id)a0 linkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (void)onChar:(id)a0;
- (void)onDelete;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChangeSelection:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void).cxx_destruct;

@end
