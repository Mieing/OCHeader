@class WCPipContentSourcePlaybackDelegateObj, WCPlayerPipDisplayLayerView, NSString;

@interface WCPipContentSourcePlayer_SampleBuffer : WCPipContentSourcePlayer <AVPictureInPictureSampleBufferPlaybackDelegate>

@property (retain, nonatomic) WCPlayerPipDisplayLayerView *displayLayerView;
@property (nonatomic) double duration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) double seekingTime;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) int pipControllerPlayState;
@property (retain, nonatomic) WCPipContentSourcePlaybackDelegateObj *playbackDelegateObj;
@property (copy, nonatomic) id /* block */ seekCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 playArgs:(id)a1 playbackInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)unregisterPipResourcre;
- (void)occupyAudioModuleSucc:(BOOL)a0;
- (void)createPipResouce;
- (void)cleanResourceWhenPipNotSuccStart;
- (BOOL)isEnqueueSampleBufferType;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)a0;
- (void)play;
- (void)pause:(BOOL)a0;
- (void)seekTo:(double)a0;
- (void)onStartBuffering;
- (void)onBufferingComplete;
- (void)setRate:(double)a0;
- (void)setLoopBack:(BOOL)a0;
- (void)onPlayerEnterErrorState;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerSeekComplete:(double)a0;
- (void)onPlayCallback:(double)a0;
- (void)onRenderedOneFrame:(id)a0;
- (BOOL)isCurrentPlayingState;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)a0;
- (void)pictureInPictureController:(id)a0 didTransitionToRenderSize:(struct { int x0; int x1; })a1;
- (void)pictureInPictureController:(id)a0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
