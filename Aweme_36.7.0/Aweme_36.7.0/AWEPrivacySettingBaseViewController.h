@class NSString, AWEUILoadingView, AWESettingBaseViewModel;

@interface AWEPrivacySettingBaseViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol, AWEPrivacySettingBaseViewModelDelegate>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL viewHasAppeared;
@property (retain, nonatomic) AWESettingBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)viewModelStartsLoading:(id)a0;
- (void)viewModelDidReload:(id)a0;
- (void)viewModel:(id)a0 didInsertSections:(id)a1;
- (void)viewModel:(id)a0 didDeleteSections:(id)a1;
- (void)viewModel:(id)a0 didUpdateItemsAtIndexPaths:(id)a1;
- (void)viewModel:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)viewModel:(id)a0 didDeleteItemsAtIndexPaths:(id)a1;
- (void)viewModelBeginsUpdates:(id)a0;
- (void)viewModelEndsUpdates:(id)a0;
- (void)viewModelEndsLoading:(id)a0;
- (BOOL)useCardUIStyle;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
