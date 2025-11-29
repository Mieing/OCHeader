@class NSString;

@interface AWEBaseDetailContainerViewController : AWEBaseListViewController <AWEBaseDetailContainerViewControllerOverride, UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)dismissLoadingView;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)_addNotifications;
- (void)setupContainerUI;
- (void)bindContainerViewModel;
- (void)addContainerNavigationView;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showLoadingView;
- (void)setupCollectionView:(id)a0;

@end
