@class UIView, NSString, UITextView, UIButton, DUXCheckBox, DUXButton, UITextField, UILabel, AWEBatManIDCardAuthViewControllerConfig;
@protocol AWEBatManIDCardAuthViewControllerActionDelegate;

@interface AWEBatManIDCardAuthViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEBatManIDCardAuthViewControllerConfig *config;
@property (nonatomic) double contentWidth;
@property (nonatomic) double horizontalPadding;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *headingLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UITextView *checkTextView;
@property (retain, nonatomic) UITextField *nameUITextField;
@property (retain, nonatomic) UITextField *idCardUITextField;
@property (copy, nonatomic) NSString *idCardNumber;
@property (nonatomic) unsigned long long textFieldType;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<AWEBatManIDCardAuthViewControllerActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_maskAreaClicked;
- (void)_keyboardWillShowNotification;
- (void)_keyboardWillHideNotification;
- (void)callbackCompletionBlock:(BOOL)a0;
- (void)_closeButtonClicked;
- (void)_nameUITextFieldDidBegin:(id)a0;
- (void)_nameUITextFieldDidChange:(id)a0;
- (void)_idCardUITextFieldDidBegin:(id)a0;
- (void)_idCardUITextFieldDidChange:(id)a0;
- (void)_confirmButtonClicked;
- (void)_checkBoxTouched:(id)a0;
- (BOOL)isIDCardWithString:(id)a0;
- (void)shakeTextView;
- (void)showRetainDialog;
- (BOOL)isBlankSpaceAtPoint:(unsigned long long)a0;
- (id)makeFormatStringWithText:(id)a0;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setupUI;
- (void)setLoadingState:(BOOL)a0;

@end
