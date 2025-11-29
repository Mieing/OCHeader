@class WCFinderStreamProfileHeaderView;

@interface WCFinderStreamProfileHeaderViewController : MMUIViewController

@property (readonly, nonatomic) WCFinderStreamProfileHeaderView *headerView;
@property (nonatomic) BOOL alawayDarkModel;

- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (long long)currentMMUserInterfaceStyle;
- (BOOL)useTransparentNavibar;

@end
