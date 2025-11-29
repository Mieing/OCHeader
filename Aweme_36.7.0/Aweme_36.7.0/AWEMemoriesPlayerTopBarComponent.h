@class AWEMemoriesPlayerTopBarView, AWEMemoriesPlayerDataController, NSString;
@protocol AWEMemoriesPlayerCoreService;

@interface AWEMemoriesPlayerTopBarComponent : AWEMemoriesPlayerBaseComponent <AWEMemoriesPlayerTopBarViewDelegate>

@property (retain, nonatomic) AWEMemoriesPlayerTopBarView *topBarView;
@property (weak, nonatomic) id<AWEMemoriesPlayerCoreService> playerCoreService;
@property (weak, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)setupWithMemoriesDataController:(id)a0;
- (void)closeMemoriesPlayerForWidget;
- (void)closeMemoriesPlayer;
- (void)topBar:(id)a0 didClickedWithActionType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
