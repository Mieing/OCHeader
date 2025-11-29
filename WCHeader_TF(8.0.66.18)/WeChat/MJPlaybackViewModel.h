@class WCAudioModuleProxy, UBValueSignal, OMCTimeline, UBBooleanSignal, OMCPlaybackSession, MJPlaybackConfiguration, UBDictionarySignal;
@protocol MJPlaybackViewModelDelegate;

@interface MJPlaybackViewModel : NSObject

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSkimTime;
@property (retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy;
@property (weak, nonatomic) id<MJPlaybackViewModelDelegate> delegate;
@property (readonly, nonatomic) UBDictionarySignal *videoFrameTimeDidChangeSignal;
@property (readonly, nonatomic) UBDictionarySignal *playbackTimeDidChangeSignal;
@property (readonly, nonatomic) UBValueSignal *skimTimeDidChangeSignal;
@property (readonly, nonatomic) UBBooleanSignal *isPlayingDidChangeSignal;
@property (readonly, nonatomic) OMCTimeline *timeline;
@property (readonly, nonatomic) OMCPlaybackSession *playbackSession;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playbackTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } lastVideoFrameTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastClipSkimTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaTimeRange;
@property (readonly, nonatomic) MJPlaybackConfiguration *playbackConfiguration;

- (id)initWithTimeline:(id)a0;
- (void)dealloc;
- (BOOL)bindRenderView:(id)a0 error:(id *)a1;
- (void)unbindRenderView;
- (void)openWithPreviewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)closeWithDeactiveAudioModule:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPlayingWithCompletionHandler:(id /* block */)a0;
- (void)startPlayingWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)startPlayingWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 initialStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playbackLoopCount:(int)a2 isAudioEnabled:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)stopPlaying;
- (void)stopPlayingWithCompletionHandler:(id /* block */)a0;
- (void)stopPlayingAndBeginClipSkimmingWithVisualClipSegmentVM:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)endClipSkimming;
- (void)skimToProgress:(double)a0;
- (void)skimToProgress:(double)a0 forceUpdate:(BOOL)a1;
- (void)skimToProgress:(double)a0 forceUpdate:(BOOL)a1 shouldNotDrop:(BOOL)a2;
- (void)skimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)skimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceUpdate:(BOOL)a1;
- (void)skimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceUpdate:(BOOL)a1 shouldNotDrop:(BOOL)a2;
- (void)clipSkimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)clipSkimToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceUpdate:(BOOL)a1;
- (void)commitUpdateWithPreviewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldForceUpdatePreview:(BOOL)a1 isFullUpdate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)skipRefreshNextVideoFrame;
- (void)temporaryUpdatePlaybackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)beginTrackingSafeAreaWithSegmentID:(id)a0 normalizedSafeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 trackingHandler:(id /* block */)a2;
- (void)endTrackingSafeArea;
- (void)addDecorationBoxesWithConfigs:(id)a0;
- (void)removeAllDecorationBoxes;
- (void)_updateIsPlaying:(BOOL)a0;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)snapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)enterClosedTimeRangeModeWithCompletionHandler:(id /* block */)a0;
- (void)leaveClosedTimeRangeModeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
