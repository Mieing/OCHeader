@class NSArray, UIVisualEffectView, IESLiveAdminSettingStore, UIView, UIButton;

@interface IESLiveRoomAdminContainerVC : UIViewController

@property (retain, nonatomic) UIVisualEffectView *bgEffectview;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSArray *adminPrivilegeInfos;
@property (nonatomic) BOOL enableBackLastPage;
@property (nonatomic) BOOL layoutOnce;
@property (retain, nonatomic) IESLiveAdminSettingStore *store;

- (id)initWithChildAdminPrivileges:(id)a0 enableBackLastPage:(BOOL)a1;
- (void)onTapBackButton:(id)a0;
- (void)setupChildViews;
- (void)updateControlPanel;
- (void)onTapIndexButton:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
