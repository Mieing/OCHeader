@class AWEDiskManualCleanupView, NSString, AWEDiskCleanViewModel, DUXLoadingToast;

@interface AWEDiskManualCleanupManagerViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEDiskCleanViewModel *viewModel;
@property (retain, nonatomic) DUXLoadingToast *cleanLoading;
@property (retain, nonatomic) AWEDiskManualCleanupView *manualCleanupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick;
- (void)configNavigationBar;
- (void)observeDeleteDrafts;
- (void)showCleanDraftToast;
- (void)gotoDraftBox;
- (void)alertWithCleanType:(unsigned long long)a0;
- (void)setupCleanViewModel;
- (void)gotoOfflineVideoCenter;
- (void)gotoChatBox;
- (void)initManualCleanupView;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (id)appDisplayName;
- (void)createUI;

@end
