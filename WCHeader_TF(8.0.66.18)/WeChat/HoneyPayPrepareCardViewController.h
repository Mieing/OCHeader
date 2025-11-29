@class WCPayNavigationBarBottomBanner, NSString, UITextField, WCPayNoticeItemView, HoneyPayPrepareCardView, RichTextView, UIButton;
@protocol HoneyPayPrepareCardViewControllerDelegate;

@interface HoneyPayPrepareCardViewController : HoneyPayBaseViewController <HoneyPayPrepareCardViewDelegate, ILinkEventExt, UITextFieldDelegate>

@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) NSString *amount;
@property (retain, nonatomic) RichTextView *inputWishing;
@property (retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner;
@property (retain, nonatomic) HoneyPayPrepareCardView *prepareCardView;
@property (retain, nonatomic) UITextField *textFiled;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (weak, nonatomic) id<HoneyPayPrepareCardViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)relaodTableView;
- (id)createStatusHeaderView;
- (void)checkAmount;
- (void)done;
- (void)keyboardDidShow:(id)a0;
- (void)honeyPaykeyboardDidHide:(id)a0;
- (void)honeyPayPrepareCardView:(id)a0 didchangeAmount:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)textFieldDidEndEditing:(id)a0;
- (double)max;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
