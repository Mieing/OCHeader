@class UIView, NSString, NSPredicate, UIImageView, UIButton, NSDictionary, UITextField, UILabel;

@interface AWEAnchorCustomTitleViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) UILabel *customLabel;
@property (retain, nonatomic) UITextField *titleTextField;
@property (retain, nonatomic) UIButton *titleEditIcon;
@property (retain, nonatomic) UIButton *textClearButton;
@property (retain, nonatomic) UIButton *textConfirmButton;
@property (retain, nonatomic) UILabel *titleEditViewBottomLine;
@property (retain, nonatomic) UILabel *titleEditCharacterCount;
@property (retain, nonatomic) UILabel *customDescLabel;
@property (retain, nonatomic) NSString *customTitle;
@property (retain, nonatomic) UIButton *saveButton;
@property (copy, nonatomic) id /* block */ saveButtonAction;
@property (retain, nonatomic) NSPredicate *pred;
@property (copy, nonatomic) NSString *originTitle;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidTapClearButton:(id)a0;
- (void)showAlertDialog;
- (void)closeAreaDidClick:(id)a0;
- (void)trackEditOperationWithOperateType:(id)a0 ifEdit:(id)a1;
- (void)trackEditToastWithToastType:(id)a0;
- (void)trackEditTitleViewShow;
- (void)saveButtonDidClick:(id)a0;
- (void)titleEditButtonDidClick;
- (void)textFieldDidTapConfirmButton:(id)a0;
- (id)initWithTitle:(id)a0 appId:(id)a1 extra:(id)a2;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)addObserver;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)textFieldDidChange:(id)a0;
- (void)setUpUI;

@end
