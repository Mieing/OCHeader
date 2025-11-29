@class NSString, AWEBinding;

@interface AEKPreviewEditorImpl : AEKBaseRuntimeEditor <AEKPreviewEditor>

@property (retain, nonatomic) AWEBinding *statusBinding;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEBinding *currentTimeBinding;
@property (nonatomic) double currentPlayerTime;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) double totalVideoDuration;
@property (nonatomic) BOOL repeatPlay;
@property (readonly, nonatomic) long long previewMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlayerVolume:(double)a0;
- (void)setPlayerBackgroundColor:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 seekMode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setHighFrameRateRender:(BOOL)a0;
- (void)pauseAsync;
- (id)nle;
- (void)syncRefreshAlgoAndCurrentFrame;
- (void)syncRefreshRenderEffectForNextNFrames;
- (int)flushSeekCmd;
- (int)setPreviewFps:(int)a0 isDynamicAdjust:(BOOL)a1;
- (void)getPreviewFps:(double *)a0 targetFps:(double *)a1 playFps:(double *)a2;
- (void)enableSuperResolution:(BOOL)a0;
- (id)initWithData:(id)a0 subscriberProvider:(id)a1;
- (void)setPlayRangeStartTime:(long long)a0 endTime:(long long)a1 mode:(int)a2;
- (void)updatePreMVP:(id)a0 anchorInCanvas:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 scale:(double)a3 widthHeightRatio:(double)a4;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;

@end
