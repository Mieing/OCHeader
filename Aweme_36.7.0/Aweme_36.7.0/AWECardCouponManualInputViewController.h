@class NSString, AWEButton, UILabel, AWEFormattedTextField;

@interface AWECardCouponManualInputViewController : UIViewController <UITextFieldDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWEFormattedTextField *textField;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (nonatomic) BOOL isGrouponCoupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)tapView;
- (void)backButtonDidTap;
- (void)confirmButtonDidTap;
- (void)clearInput;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
