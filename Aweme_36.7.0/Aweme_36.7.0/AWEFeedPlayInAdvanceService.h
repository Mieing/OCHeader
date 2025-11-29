@class AWEAwemePageContext, UIViewController, UITableViewCell, NSString, NSNumber, AWEShellControllerManager;
@protocol AWEFeedContainerSafeWrapperProtocol, AWEAwemeFeedServiceBaseContainerProtocol, AWEFeedContainerServiceResolverProtocol, AWEAwemeFeedBaseControllerProtocol, AWEFeedBaseCellProtocol;

@interface AWEFeedPlayInAdvanceService : AWEFeedContainerBaseService <AWEFeedContainerPlayInAdvanceServiceProtocol>

@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) long long lastPlayIndex;
@property (weak, nonatomic) UITableViewCell *lastPlayCell;
@property (nonatomic) double lastCheckPlayTimeInAdvance;
@property (nonatomic) long long willPlayIndex;
@property (nonatomic) long long playIndexInAdvance;
@property (readonly, weak, nonatomic) UITableViewCell<AWEFeedBaseCellProtocol> *currentCell;
@property (nonatomic) long long currentPlayIndex;
@property (retain, nonatomic) NSNumber *shouldPlayInAdvanceInner;
@property (nonatomic) BOOL canAdvancedPauseWhenEndDrag;
@property (copy, nonatomic) id /* block */ advancePlayBlock;
@property (copy, nonatomic) id /* block */ logExtraBlock;
@property (copy, nonatomic) id /* block */ resetSpeedManager;
@property (nonatomic) long long containerType;
@property (weak, nonatomic) AWEShellControllerManager<AWEAwemeFeedBaseControllerProtocol> *containerControllerManager;
@property (weak, nonatomic) AWEAwemePageContext *context;
@property (weak, nonatomic) id<AWEFeedContainerServiceResolverProtocol> serviceResolver;
@property (weak, nonatomic) UIViewController<AWEAwemeFeedServiceBaseContainerProtocol> *container;
@property (weak, nonatomic) id<AWEFeedContainerSafeWrapperProtocol> containerWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;

- (void)onScrollDidEnd;
- (id)visibleDetailCells;
- (double)checkTimeInterval;
- (id)shouldPlayInAdvance;
- (void)tryPauseCurrentVideoInAdvance:(unsigned long long)a0;
- (void)playNextVideoInAdvance;
- (BOOL)checkCellIsValidWithNextIndex:(long long)a0;
- (unsigned long long)optimizePauseTiming;
- (void)playNextVideoInner;
- (BOOL)isSupportPlayInAdvanceInner:(id)a0;
- (void)pauseCurrentVideoInAdvance;
- (void)setSlideDirectionWhenInheriteSpeedBeforePlayNextVideo;
- (void)playAdvanceIfNeededWithScrollView:(id)a0;
- (void)setupPlayAdvancedPauseTimingWithCurIndex:(long long)a0 nextIndex:(long long)a1;
- (void)setupWithInitialIndex:(long long)a0;
- (void)updateFeedCellForInheritSpped:(id)a0 withIndexPath:(id)a1;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)tableView;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
