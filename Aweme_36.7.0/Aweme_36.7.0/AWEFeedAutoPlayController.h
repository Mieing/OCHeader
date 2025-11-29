@class NSString, NSIndexPath;
@protocol AWEFeedTrackControllerProtocol, AWEFeedAutoPlayManagerProtocol;

@interface AWEFeedAutoPlayController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol>

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *didEndDisplayingIndexPath;
@property (nonatomic) long long autoPlayNoActionCount;
@property (nonatomic) double autoPlayNoActionTime;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)viewDidLoadAfterTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)addNotifications;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (void)handleFeedAutoPlayNextNotification:(id)a0;
- (void)unbindTimerForLiveItemIfNeed:(id)a0;
- (void)handleLiveAutoNextTimer:(id)a0;
- (BOOL)userInteractFilter;
- (void)bindTimerForLiveItemIfNeed:(id)a0;
- (void)trackAutoSlide;
- (void)enableInteractionController:(BOOL)a0 forCell:(id)a1;
- (BOOL)notificationContextFilter:(id)a0;
- (BOOL)realFeedAutoPlayNextIfNeeded;
- (BOOL)playEnviromentFilter;
- (BOOL)autoPLayScrollToNext;
- (BOOL)viewController:(id)a0 isInSuperViewController:(id)a1;
- (id)paramsForSlide;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
