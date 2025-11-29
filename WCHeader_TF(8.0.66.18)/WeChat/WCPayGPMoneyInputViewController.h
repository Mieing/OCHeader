@class NSString, WCPayTextField, WCPayDecimalKeyboardView, WCPayRemarkPageSheet, RichTextView;
@protocol WCPayGPMoneyInputViewControllerDelegate;

@interface WCPayGPMoneyInputViewController : WCPayBaseViewController <ILinkEventExt, WCPayDecimalKeyboardViewDelegate, WCPayRemarkPageSheetDelegate>

@property (weak, nonatomic) id<WCPayGPMoneyInputViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayTextField *moneyTextField;
@property (retain, nonatomic) RichTextView *remarkTextView;
@property (retain, nonatomic) WCPayDecimalKeyboardView *keyboardView;
@property (retain, nonatomic) NSString *remarkContent;
@property (retain, nonatomic) WCPayRemarkPageSheet *remarkPageSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)setupHeaderView:(id)a0;
- (void)setupInputView:(id)a0;
- (void)genKeyboardView;
- (id)getLauncherDisplayName;
- (void)textFieldDidChang:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)activeTextField;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)pageSheetCancel;
- (void)pageSheetConfirmWithRemark:(id)a0;
- (void).cxx_destruct;

@end
