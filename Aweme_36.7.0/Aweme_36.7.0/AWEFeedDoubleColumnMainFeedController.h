@class NSString, NSMutableDictionary;

@interface AWEFeedDoubleColumnMainFeedController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedPlayControlServiceListenerProtocol>

@property (retain, nonatomic) NSMutableDictionary *appearTimeDict;
@property (nonatomic) BOOL feedAlreadyRender;
@property (nonatomic) BOOL isCanceledByBackground;
@property (nonatomic) BOOL alreadyPreloadCacheData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (id)shouldPreventPauseBeforePlayStateChanged;
- (void)trackPinchEntranceShow;
- (void)setMemoryMonitor;
- (long long)preloadC2CacheDelayTime;
- (void)preloadC2CacheIfAvailable;
- (void)realTriggerPreloadC2VC;
- (void)realPreloadC2Cache;
- (void)preloadNewCacheData:(id)a0;
- (void)trackPreloadCacheWithSuccess:(BOOL)a0 isFromHistory:(BOOL)a1;
- (void)realTriggerPreloadC2Data;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
