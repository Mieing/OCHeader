@class AWEOfflineVideoCenterSectionViewModel, AWEOfflineCenterEmptyView, NSString, AWENavigationBar, AWEOfflineVideoCenterStorageSizeView;

@interface AWEOfflineVideoCenterViewController : AWEBaseListViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (nonatomic) BOOL shouldHideRecommendView;
@property (retain, nonatomic) AWEOfflineVideoCenterSectionViewModel *sectionViewModel;
@property (retain, nonatomic) AWEOfflineVideoCenterStorageSizeView *storageSizeView;
@property (retain, nonatomic) AWEOfflineCenterEmptyView *emptyView;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL hasTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)onBackBtnClicked;
- (id)sectionControllerClassArray;
- (void)trackShow;
- (void)setupNotification;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)addNavigationBar;
- (void)setupCacheSizeLabel;
- (void)setupEmptyView;
- (void)updateViewInMainQuque;
- (void).cxx_destruct;
- (id)sectionController;
- (long long)preferredStatusBarStyle;
- (void)updateView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupView;
- (void)setupCollectionView:(id)a0;

@end
