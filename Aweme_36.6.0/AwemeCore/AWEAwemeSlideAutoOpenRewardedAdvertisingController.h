@class NSString, LOTAnimationView, AWEAwemeModel, UIView;

@interface AWEAwemeSlideAutoOpenRewardedAdvertisingController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *reloadBeforeCurrentModel;
@property (retain, nonatomic) AWEAwemeModel *currentDisplayModel;
@property (retain, nonatomic) UIView *bottomBlackView;
@property (retain, nonatomic) LOTAnimationView *coverLottieView;
@property (nonatomic) BOOL canAutoUnlock;
@property (nonatomic) long long watchCount;
@property (nonatomic) BOOL isSlideDown;
@property (nonatomic) BOOL blockShowContaner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)didEndConfigingCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)willReloadData;
- (void)didReloadData;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (id)getInteractionContext;
- (BOOL)ignoreReloadAfterTableViewLifeCycleWithModel:(id)a0;
- (void)sendEventToInteraction:(id)a0 object:(id)a1 context:(id)a2;
- (void)removeBottomBlackView;
- (void)downSlideAutoOpenConfigWithCell:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldPreloadAutoOpenContainerWithAwemeModel:(id)a0 nextModel:(id)a1 playerPlayTime:(double)a2 totalTime:(double)a3;
- (long long)autoUnlockNeedWatchCount;
- (BOOL)slideShouldAutoOpenContainerWithIndexPath:(id)a0 model:(id)a1;
- (void)addBottomViewWithCell:(id)a0;
- (BOOL)enableUseIAASlideServerControl;
- (BOOL)enableUseIAASlideMode;
- (BOOL)enableIAAPreload;
- (long long)autoUnlockPreloadNeedWatchRateServerControl;
- (long long)autoUnlockPreloadNeedWatchRate;
- (id)getBusinessExtraDataWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
