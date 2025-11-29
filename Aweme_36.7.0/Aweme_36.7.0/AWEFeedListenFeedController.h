@class AWEListenFeedPlayModel, NSString;

@interface AWEFeedListenFeedController : AWEBaseController <AWEFeedPlayControlServiceListenerProtocol, AWEFeedListenFeedControllerProtocol>

@property (retain, nonatomic) AWEListenFeedPlayModel *tempPlayModel;
@property (nonatomic) double beginPredictTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertListenFeedAwemeModel:(id)a0 playModel:(id)a1 referString:(id)a2;
- (id)getCurrentTabDataController;
- (id)shouldPreventPlayAfterPlayStateChanged;
- (id)shouldPreventPauseBeforePlayStateChanged;
- (BOOL)canHandleCurrentAwemeByListenFeed;
- (id)__currentPlayerViewController;
- (void)configListenFeedDefaultSeekToTimeIfNeeded:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;

@end
