@class NSString, HunterVideoView;
@protocol HunterVideoViewDelegate, IESVideoPlayerDelegate;

@interface HunterVideoIESVideoPlayerDelegate : NSObject <IESVideoPlayerDelegate>

@property (weak, nonatomic) HunterVideoView *hunterVideoView;
@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (weak, nonatomic) id<IESVideoPlayerDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
