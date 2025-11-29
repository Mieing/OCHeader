@class NSString, AWEVideoPlayTimeRecorder, NSMutableSet;

@interface AWEFeedContinuePlayController : AWEBaseController <AWEFeedPlayRecordInfoProtocol>

@property (retain, nonatomic) AWEVideoPlayTimeRecorder *playTimeRecorder;
@property (retain, nonatomic) NSMutableSet *playModels;
@property (nonatomic) long long scrollEndMaxCellIndex;
@property (nonatomic) BOOL didEnterOthersPage;
@property (nonatomic) BOOL didEnterPinchPage;
@property (nonatomic) BOOL didUpdateFromSmallWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (long long)maxUserScorllIndex;
- (BOOL)isAvatarLive;
- (void)tableView:(id)a0 willDisplayCellBeforePrepareForDisplay:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)shouldOptimizeContinuePlayWithModel:(id)a0 seekTime:(double)a1;
- (BOOL)shouldUpdateProgress;
- (double)seekTimeLimitedVal;
- (BOOL)shouldPlayletNeedUpdateProgress:(BOOL)a0;
- (long long)currentPlayVideoCount;
- (BOOL)shouldAdaptionDefaultSeekTime:(id)a0 cell:(id)a1;
- (void)configureRelayPlayCell:(id)a0 withModel:(id)a1;
- (void)configDefaultSeekTimeInRevisitVideo:(id)a0 model:(id)a1;
- (void)configDefaultSeekTimeInJXRevisitVideo:(id)a0 model:(id)a1;
- (void)configDefaultSeekTimeInWatchVideoLater:(id)a0 withModel:(id)a1;
- (void)configDefaultSeekTimeInReCreateVideo:(id)a0 model:(id)a1;
- (void)configDefaultSeekToTimeIfNeeded:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear;

@end
