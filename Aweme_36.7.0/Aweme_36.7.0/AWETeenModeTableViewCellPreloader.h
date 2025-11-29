@class AWEListDataController, AWETeenAwemeTableViewCell;
@protocol AWETeenModeTableViewCellPreloaderDelegate, AWEFeedPreloadManagerProtocol;

@interface AWETeenModeTableViewCellPreloader : NSObject

@property (weak, nonatomic) id<AWETeenModeTableViewCellPreloaderDelegate> delegate;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> preloadManager;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) AWETeenAwemeTableViewCell *preloadedCell;
@property (weak, nonatomic) AWETeenAwemeTableViewCell *willDisplayPreloadedCell;
@property (nonatomic) double cellPreloadDelay;
@property (nonatomic) long long scheduledPreloadIndex;

- (void)scheduleCellPreloading;
- (BOOL)isCellPreloadingEnabled;
- (void)checkToPrepareForDisplay:(id)a0;
- (void)preloadNextCellIfNeeded;
- (id)fetchPreloadedCellForRowWithModel:(id)a0 atIndexPath:(id)a1;
- (id)initWithPreloadManager:(id)a0 dataController:(id)a1 delegate:(id)a2;
- (void)cancelCellPreloadingIfNeeded;
- (BOOL)willDisplayPreloadedCell:(id)a0;
- (BOOL)p_optimizePlayFlowEnable;
- (void)p_viewControllerTransitionNotification:(id)a0;
- (void)p_cancelCellPreloading;
- (void)p_prepareForDisplayWithCell:(id)a0;
- (void)p_clearPrelodPlayerIfNeed;
- (void).cxx_destruct;
- (void)dealloc;

@end
