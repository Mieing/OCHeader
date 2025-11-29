@class NSString, WCPayTextField, WCPayDecimalKeyboardView, UILabel, UIView, WCPayCss;
@protocol WCPayBizF2FConfirmViewControllerDelegate;

@interface WCPayBizF2FConfirmViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate>

@property (weak) id<WCPayBizF2FConfirmViewControllerDelegate> m_delegate;
@property (retain) UIView *containerView;
@property (retain) UIView *headerView;
@property (retain, nonatomic) UIView *titleDescView;
@property (retain) UILabel *headerTitleLabel;
@property (retain) UILabel *headerDescLabel;
@property (retain) UIView *firstLine;
@property (retain) UIView *textFieldRowView;
@property (retain) UILabel *textFieldRowTitle;
@property (retain) UILabel *textFieldUnitLabel;
@property (retain) WCPayTextField *textField;
@property (retain) UIView *secondLine;
@property (retain) WCPayDecimalKeyboardView *keyboard;
@property (retain) WCPayCss *css;
@property double keyboardHeight;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *sign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)onClickBackButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateTitleDescArea;
- (void)updateHeaderTitleLabel;
- (void)updateDescView;
- (void)updateFirstLine;
- (void)updateTextFieldRowView;
- (void)updateTextFieldRowTitle;
- (void)updateTextFieldUnitLabel;
- (void)updateTextField;
- (void)updateSecondLine;
- (void)onTapEmpty;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)textFieldDidChange;
- (void)keyboardViewConfirmBtnClick:(id)a0;
- (id)keyboardHostViewController;
- (void).cxx_destruct;

@end
