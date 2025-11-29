@class XImageViewRenderer;

@interface CdnRciRenderView : CdnRenderViewBase <CdnRenderStatsDelegate> {
    unsigned long long _renderFrameCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    BOOL _rendering;
    struct __CVBuffer { } *_sampleBufferToRender;
    unsigned long long _busyCount;
    long long _startPlayTs;
    float _currentScale;
    struct CGSize { double width; double height; } _bufSize;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoRect;
@property (readonly, copy, nonatomic) id /* block */ renderLogger;
@property (nonatomic) unsigned int mRawDataFrameType;
@property (nonatomic) BOOL isBufferSetup;
@property BOOL isRotating;
@property (nonatomic) BOOL isInitProgram;
@property (nonatomic) BOOL mReceivedFirstFrame;
@property (retain, nonatomic) XImageViewRenderer *renderer;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) float rotationInDegree;

+ (BOOL)checkInitParamValidWithRenderMode:(long long)a0 renderScene:(long long)a1;

- (id)initRemoteViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderMode:(long long)a1 renderScene:(long long)a2;
- (void)dealloc;
- (void)initVrParameter;
- (void)uninitVrParameter;
- (void)handleGesturesOperation:(id)a0;
- (void)setTouchControlFlag:(BOOL)a0;
- (void)setSensorControlFlag:(BOOL)a0 keepLastSensor:(BOOL)a1;
- (void)setCustomrenderMode:(long long)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)asyncLayout;
- (void)removeFromSuperview;
- (void)setup;
- (void)willRotate:(id)a0;
- (void)didRotate:(id)a0;
- (void)sendNotifyEvent:(int)a0;
- (void)sendNotifyEvent:(int)a0 withParams:(id)a1;
- (struct CGSize { double x0; double x1; })bufSize;
- (float)currentScale;
- (void)pause;
- (void)resume;
- (void)configCdnWeEffectManager:(id)a0;
- (void)updateNeedProcessByWeffect:(BOOL)a0;
- (BOOL)checkEnableProcessByWeEffect;
- (void)renderFrame:(id)a0;
- (void)renderFrame:(id)a0 completionBlock:(id /* block */)a1;
- (void)_renderFrame:(struct __CVBuffer { } *)a0;
- (void)invokeRenderFrame:(struct __CVBuffer { } *)a0;
- (BOOL)checkWeEffectFrameValid:(id)a0;
- (void)onRenderBegin;
- (void)onRenderEnd:(id)a0;
- (void)innerRenderRGBAImage:(id)a0;
- (void)innerRenderFrame:(struct __CVBuffer { } *)a0;
- (void)pauseRenderLocalView;
- (void)setEnhanceParam:(int)a0;
- (void)onCdnRenderStatsMonitoredBlock:(unsigned long long)a0;
- (void)onCdnRenderStatsFpsUpdate:(int)a0;
- (void)statisticFrame:(BOOL)a0;
- (void)resetStats;
- (void)resetStatsInternal;
- (void)setRotation:(long long)a0;
- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppWillEnterForeground:(id)a0;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)a0 MaxVal:(float)a1;
- (void)setMaxMinHalfFOVVer:(float)a0 MaxVal:(float)a1;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (id)getCdnRenderContext;
- (void).cxx_destruct;

@end
