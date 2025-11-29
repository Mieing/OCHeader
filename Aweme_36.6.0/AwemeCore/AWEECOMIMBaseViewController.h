@class AWEECOMIMNavigationBar, NSString;

@interface AWEECOMIMBaseViewController : UIViewController <BTMPageManagableProtocol>

@property (retain, nonatomic) AWEECOMIMNavigationBar *navigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)a0;
- (void)refreshWithIsDarkTheme;
- (id)btmParamsDict;
- (id)btmPageID;
- (id)naviBarLeftButtonImageDarkTheme;
- (id)naviBarLeftButtonImageDefault;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (BOOL)isDarkTheme;
- (id)pageName;

@end
