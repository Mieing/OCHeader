@class NSString, UIViewController, NSMutableArray;
@protocol AWEFeedContainerProtocol;

@interface AWEFeedDetectSoundLeakManager : NSObject <AWEHPLifeCycleProtocol>

@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *weakFeedTableVC;
@property (retain, nonatomic) NSMutableArray *feedCellWrappers;
@property (nonatomic) long long currentPageStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerHPLifeCycleIfNeeded;
+ (id)sharedInstance;

- (void)startObserveRecommendFeed:(id)a0;
- (void)pauseAllCell;
- (void)updateFeedRecommendPageStatus:(long long)a0;
- (void)startObserveFeedCell:(id)a0;
- (void)cancelDetectFeedSoundLeak;
- (BOOL)enableDetectFeedSoundLeakForPageStatus:(long long)a0;
- (void)tryDetectFeedSoundLeak;
- (BOOL)checkFeedCellWrapperIsPlaying:(id)a0;
- (void)trackPauseAllCellWithPlayingCellWrapper:(id)a0;
- (void)detectFeedSoundLeak;
- (void)trackSoundLeakWithPlayingCellWrappers:(id)a0;
- (void)tryCompensatoryPauseForPlayingCellWrappers:(id)a0;
- (BOOL)enableFeedSoundLeakCompensatoryPauseWithPageStatus:(long long)a0;
- (void)pauseFeedCellWrapperIfPlaying:(id)a0;
- (void)leaveTopTabChannelWithTabId:(id)a0 leaveModel:(id)a1;
- (void)leaveBottomTabChannelWithTabId:(id)a0 leaveModel:(id)a1;
- (void)enterHPSearchEntrance;
- (void)enterPublishEntrance;
- (void).cxx_destruct;

@end
