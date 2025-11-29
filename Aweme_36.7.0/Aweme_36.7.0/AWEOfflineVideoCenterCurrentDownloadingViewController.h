@class AWEOfflineVideoCenterStorageSizeView, AWEOfflineCenterEmptyView, NSString, AWENavigationBar, AWEOfflineVideoCenterCurrentDownloadingSectionViewModel;

@interface AWEOfflineVideoCenterCurrentDownloadingViewController : AWEBaseListViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) AWEOfflineVideoCenterCurrentDownloadingSectionViewModel *sectionViewModel;
@property (retain, nonatomic) AWEOfflineCenterEmptyView *emptyView;
@property (retain, nonatomic) AWEOfflineVideoCenterStorageSizeView *storageSizeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)onBackBtnClicked;
- (id)sectionControllerClassArray;
- (id)emptySectionsPlaceholderView;
- (void)setupNotification;
- (void)addNavigationBar;
- (void)setupCacheSizeLabel;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)updateView;
- (void)viewDidLoad;
- (void)setupView;
- (void)setupCollectionView:(id)a0;

@end
