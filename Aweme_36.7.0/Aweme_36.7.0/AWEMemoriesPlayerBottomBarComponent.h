@class AWEMemoriesPlayerDataController, NSString, AWEMemoriesPlayerBottomBarViewModel, AWEMemoriesPlayerBottomBarView, UIViewController;
@protocol AWEMemoriesPlayerGridViewControllerProtocol, AWEMemoriesPlayerCoreService;

@interface AWEMemoriesPlayerBottomBarComponent : AWEMemoriesPlayerBaseComponent <AWEMemoriesPlayerBottomBarViewModelDelegate>

@property (retain, nonatomic) AWEMemoriesPlayerBottomBarViewModel *viewModel;
@property (retain, nonatomic) AWEMemoriesPlayerBottomBarView *bottomBarView;
@property (weak, nonatomic) id<AWEMemoriesPlayerCoreService> playerCoreService;
@property (weak, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) UIViewController<AWEMemoriesPlayerGridViewControllerProtocol> *gridViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (id)serviceBinding;
- (void)componentDidLoad;
- (void)setupWithMemoriesDataController:(id)a0;
- (id)playerListViewController;
- (void).cxx_destruct;
- (void)setupUI;

@end
