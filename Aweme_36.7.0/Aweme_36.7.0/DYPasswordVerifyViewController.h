@class AWEAccountDeleteButton, NSString, UITextField, AWEUITextLoadingView, AWELoginButton, UILabel, UIButton;

@interface DYPasswordVerifyViewController : UIViewController <AWEAccountDeleteButtonDelegate, UITextFieldDelegate>

@property (retain, nonatomic) AWELoginButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UITextField *inputField;
@property (retain, nonatomic) AWEAccountDeleteButton *deleteButton;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *enterUrl;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backAction:(id)a0;
- (void)deleteButtonDidClick;
- (void)editingChangedAction:(id)a0;
- (void)submitAction:(id)a0;
- (void)setSubmitBtnState:(BOOL)a0;
- (id)initWithVerifyTicket:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
