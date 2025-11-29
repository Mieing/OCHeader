@class NSString, IESECTracker;

@interface IESECMallInnerFeedImmersionAutoPlayManager : UIView <IESECMallInnerFeedImmersionAutoPlayManagerDelegate>

@property (nonatomic) BOOL isPeriodicTime;
@property (nonatomic) BOOL mute;
@property (weak, nonatomic) IESECTracker *tracker;
@property (nonatomic) BOOL isInnerTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlayVideoWithCell:(id)a0;
- (void)startPlayVideoWithCell:(id)a0;
- (void)startImageAutoSlideWithCell:(id)a0;
- (void)stopImageAutoSlideWithCell:(id)a0;
- (void)reportLivePlaybackWithCell:(id)a0 playSuccess:(BOOL)a1;
- (long long)startAutoPlayWithCell:(id)a0;
- (long long)stopAutoPlayWithCell:(id)a0;
- (void)willBeginDraggingWithCell:(id)a0;
- (long long)playbackFailedWithCell:(id)a0;
- (void)addPeriodicTimeObserverWithCell:(id)a0;
- (void)muteTagViewDidTap:(BOOL)a0;
- (long long)didScrollToIndex:(long long)a0 withCell:(id)a1;
- (void)didChangePlayState:(unsigned long long)a0 withCell:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
