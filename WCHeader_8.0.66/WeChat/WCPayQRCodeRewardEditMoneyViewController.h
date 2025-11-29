@class MMTextView, WCPayParamInvalidTipView, UITextField, MMUIView, WCPayNoticeItemView, NSString, UIButton;
@protocol WCPayQRCodeRewardEditMoneyViewControllerDelegate;

@interface WCPayQRCodeRewardEditMoneyViewController : WCPayBaseViewController <UITextFieldDelegate, UITextViewDelegate>

@property (weak, nonatomic) id<WCPayQRCodeRewardEditMoneyViewControllerDelegate> delegate;
@property (retain, nonatomic) UITextField *moneyTextField;
@property (retain, nonatomic) MMTextView *commentTextView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) MMUIView *keyboardInputToolBar;
@property (retain, nonatomic) UIButton *checkBoxButton;
@property (nonatomic) BOOL bIsCheckBoxSelected;
@property (retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView;
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
- (void)setupContentView;
- (id)genKeyboardInputToolBar;
- (void)leftBarButtonClick;
- (long long)getInputAmount;
- (void)confirmBtnClick;
- (void)resignTextField;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)a0;
- (void)checkBoxBtnClick;
- (void).cxx_destruct;

@end
