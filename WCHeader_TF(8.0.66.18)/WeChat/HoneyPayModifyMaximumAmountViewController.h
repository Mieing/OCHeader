@class WCPayNavigationBarBottomBanner, NSString, WCPayInputMoneyView, UILabel, UIButton;
@protocol HoneyPayModifyMaximumAmountViewControllerDelegate;

@interface HoneyPayModifyMaximumAmountViewController : HoneyPayBaseViewController <WCPayInputMoneyViewDelegate>

@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) NSString *amount;
@property (retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner;
@property (retain, nonatomic) WCPayInputMoneyView *inputMoneyView;
@property (retain, nonatomic) UILabel *bottomTipsLabel;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isHide;
@property (weak, nonatomic) id<HoneyPayModifyMaximumAmountViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)relaodTableView;
- (void)updateBottomTipsView;
- (id)normalStatusHeaderView;
- (void)checkAmount;
- (void)done;
- (void)keyboardDidShow:(id)a0;
- (void)honeyPaykeyboardDidHide:(id)a0;
- (void)wcpayInputMoneyView:(id)a0 didChangeAmount:(id)a1;
- (double)max;
- (void).cxx_destruct;

@end
