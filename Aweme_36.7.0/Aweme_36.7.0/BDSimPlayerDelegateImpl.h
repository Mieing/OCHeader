@class NSString, BDSimPlayEventTrackingService;
@protocol IESVideoPlayerDelegate, BDSimPlayerImpl;

@interface BDSimPlayerDelegateImpl : NSObject <IESVideoPlayerDelegate>

@property (weak, nonatomic) id<BDSimPlayerImpl, IESVideoPlayerDelegate> target;
@property (weak, nonatomic) BDSimPlayEventTrackingService *eventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 deviceOpenedWithStreamType:(long long)a1;
- (void)player:(id)a0 avOutsyncStateDidChangedWithType:(unsigned long long)a1 extraInfo:(id)a2;
- (void)player:(id)a0 switchAudioInfoCompleted:(unsigned long long)a1;
- (void)player:(id)a0 downloadProgressWithKey:(id)a1 videoId:(id)a2 cacheSize:(long long)a3 mediaSize:(long long)a4;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)player:(id)a0 didFinishVideoDataDownloadForURL:(id)a1;
- (void)player:(id)a0 noVideoDataToDownloadForURL:(id)a1;
- (void)player:(id)a0 didFetchVideoModel:(id)a1;
- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)player:(id)a0 didUpdateVRHeadPoseWithYaw:(double)a1 pitch:(double)a2 roll:(double)a3;
- (void)player:(id)a0 onMaskInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (void)player:(id)a0 onSubtitleInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (void)player:(id)a0 onSubtitleInfoCallBack:(id)a1;
- (void)player:(id)a0 onSubtitleInfoRequested:(id)a1 error:(id)a2;
- (void)player:(id)a0 onSubSwitchCompleted:(BOOL)a1 currentSubtitleId:(long long)a2;
- (void)player:(id)a0 onSubLoadFinished:(BOOL)a1 info:(id)a2;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
