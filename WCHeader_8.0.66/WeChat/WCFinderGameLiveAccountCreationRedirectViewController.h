@class WCFinderCreateCoordinator, WCFinderLiveStarterReporter, NSString, UIView, MMUIButton, MMUILabel;

@interface WCFinderGameLiveAccountCreationRedirectViewController : MMCPUIViewController <WCFinderCreateCoordinatorDelegate>

@property (retain, nonatomic) UIView *errorIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUIButton *createAccountButton;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (retain, nonatomic) WCFinderLiveStarterReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)layoutUI;
- (id)navigationBarBackgroundColor;
- (void)onClickCreateAccountButton:(id)a0;
- (void)onClose;
- (void)finderCreateAccountSuccess:(id)a0;
- (void).cxx_destruct;

@end
