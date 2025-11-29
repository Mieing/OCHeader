@class IESECDeepFeedVideoMuteTagView, CADisplayLink, IESECTracker, IESECMallDeepFeedCell, NSMutableArray, NSString;
@protocol IESECAwemeVideoPreloadProtocol;

@interface IESECMallDeepFeedAutoPlayManager : UIView <IESECMallDeepFeedAutoPlayManagerDelegate>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *preloadVIDs;
@property (retain, nonatomic) id<IESECAwemeVideoPreloadProtocol> videoPreloader;
@property (weak, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) IESECMallDeepFeedCell *playingCell;
@property (weak, nonatomic) IESECDeepFeedVideoMuteTagView *muteTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)sharedMuteState;
+ (BOOL)revertSharedMuteState;

- (double)customTimerPeriodic;
- (void)stopPlayVideoWithCell:(id)a0;
- (void)startPlayVideoWithCell:(id)a0;
- (void)startImageAutoSlideWithCell:(id)a0;
- (void)stopImageAutoSlideWithCell:(id)a0;
- (void)reportLivePlaybackWithCell:(id)a0 playSuccess:(BOOL)a1;
- (void)stopAutoSlide;
- (void)startAutoPlayWithCell:(id)a0;
- (void)stopAutoPlayWithCell:(id)a0;
- (void)willBeginDraggingWithCell:(id)a0;
- (void)playbackFailedWithCell:(id)a0;
- (void)videoReadyToDisplayWithCell:(id)a0;
- (void)startPrefetchVideoWithModel:(id)a0;
- (void)stopPrefetchVideoWithReason:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
