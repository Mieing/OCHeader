@class AWEBinding, NSMutableDictionary, NSObject;
@protocol AWEFeedPauseModalManagerProtocol;

@interface AWEFeedPauseModalController : AWEAwemeFeedBaseController

@property (retain, nonatomic) NSObject<AWEFeedPauseModalManagerProtocol> *pauseModalManager;
@property (nonatomic) double distance;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) double lastPlayTime;
@property (retain, nonatomic) NSMutableDictionary *playStateBindingDic;
@property (copy, nonatomic) id /* block */ playStateHandler;
@property (retain, nonatomic) AWEBinding *binding;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)videoPlayer:(id)a0 didSingleClick:(id)a1;
- (BOOL)enableUseTabAbility;
- (void)forceRemovePauseModal:(id)a0;
- (void)configPauseModalManager;
- (BOOL)enablePauseModalForModel:(id)a0;
- (void)deallocPauseModalWithModel:(id)a0 cellViewController:(id)a1 clickMethod:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
