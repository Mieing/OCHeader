@class UILabel, UIView, AppleStyleLoginRegisterButton;
@protocol WCAccountSignMethodSwitchViewControllerDelegate;

@interface WCAccountSignMethodSwitchViewController : MMPageSheetBaseViewController

@property (retain, nonatomic) AppleStyleLoginRegisterButton *defaultButton;
@property (retain, nonatomic) AppleStyleLoginRegisterButton *appleButton;
@property (retain, nonatomic) AppleStyleLoginRegisterButton *facebookButton;
@property (retain, nonatomic) AppleStyleLoginRegisterButton *passkeyButton;
@property (retain, nonatomic) UILabel *separatorTextLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (weak, nonatomic) id<WCAccountSignMethodSwitchViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long signMethod;
@property (nonatomic) unsigned long long signType;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)configPageSheet;
- (void)configDetailView;
- (void)updateContent;
- (void)updateDetailViewLayout:(id)a0;
- (void)onTapDefaultButton;
- (void)onTapAppleButton;
- (void)onTapFacebookButton;
- (void)onTapPasskeyButton;
- (void).cxx_destruct;

@end
