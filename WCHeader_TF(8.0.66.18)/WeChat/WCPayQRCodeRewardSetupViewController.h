@class NSString, MMTextView, UIButton, MMUIView, UITextField, WCPayParamInvalidTipView, NSMutableArray, MMTableView, WCPayNoticeItemView;
@protocol WCPayQRCodeRewardSetupViewControllerDelegate;

@interface WCPayQRCodeRewardSetupViewController : WCPayBaseViewController <UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate>

@property (weak, nonatomic) id<WCPayQRCodeRewardSetupViewControllerDelegate> delegate;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMTextView *rewardDescTextView;
@property (retain, nonatomic) MMUIView *keyboardInputToolBar;
@property (retain, nonatomic) UIButton *confirmGenCodeBtn;
@property (retain, nonatomic) UITextField *currentEdittingTextField;
@property (retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView;
@property (retain, nonatomic) NSMutableArray *defaultAmountList;
@property (retain, nonatomic) NSMutableArray *editAmountList;
@property (nonatomic) unsigned long long maxAmount;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupTableHeaderView;
- (id)genKeyboardInputToolBar;
- (void)leftBarButtonClick;
- (void)confirmToExitEdit;
- (void)confirmGenCodeBtnClick;
- (void)resignTextField;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)a0 amountIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
