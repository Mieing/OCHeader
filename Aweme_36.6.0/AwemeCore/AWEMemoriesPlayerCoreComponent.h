@class AWEMemoriesPlayerListViewController, AWEMemoriesPlayerDataController, AWEMemoriesPlayerCoreViewModel;
@protocol AWEMemoriesPlayerBottomBarService, AWEMemoriesPlayerThumbnailService;

@interface AWEMemoriesPlayerCoreComponent : AWEMemoriesPlayerBaseComponent

@property (retain, nonatomic) AWEMemoriesPlayerCoreViewModel *viewModel;
@property (weak, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) AWEMemoriesPlayerListViewController *playerListViewController;
@property (weak, nonatomic) id<AWEMemoriesPlayerThumbnailService> thumbnailService;
@property (weak, nonatomic) id<AWEMemoriesPlayerBottomBarService> bottomBarService;
@property (nonatomic) double enterTime;
@property (nonatomic) double willResignActiveTime;
@property (nonatomic) double resignActiveTotalTime;
@property (nonatomic) double willCleanScreenTime;
@property (nonatomic) double cleanScreenTotalTime;
@property (nonatomic) BOOL isFirstLoaded;

- (id)serviceBinding;
- (void)bindObserver;
- (void)componentDidLoad;
- (void)setupWithMemoriesDataController:(id)a0;
- (void)registControlManagerCommand;
- (void)setupPauseView;
- (void)setupStickerLabel;
- (void)trackFirstFrameActionWithIsLocal:(BOOL)a0 hasContent:(BOOL)a1;
- (void)playerDidClick:(id)a0;
- (void)playerDidLongPress:(id)a0;
- (void)scrollToFirstSectionIfNeeded;
- (void).cxx_destruct;
- (double)currentTime;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)setupPlayer;
- (void)appWillResignActive;
- (void)updateThumbnail;

@end
