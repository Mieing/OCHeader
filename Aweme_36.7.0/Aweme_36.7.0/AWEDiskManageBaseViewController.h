@class NSString, AWEDiskCleanViewModel, DUXLoadingToast;

@interface AWEDiskManageBaseViewController : UIViewController

@property (retain, nonatomic) DUXLoadingToast *cleanLoading;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEDiskCleanViewModel *viewModel;

- (void)backBtnClick;
- (void)configNavigationBar;
- (void)observeDeleteDrafts;
- (void)moreBtnClick;
- (void)showCleanDraftToast;
- (void)gotoDraftBox;
- (void)alertWithCleanType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (id)appDisplayName;

@end
