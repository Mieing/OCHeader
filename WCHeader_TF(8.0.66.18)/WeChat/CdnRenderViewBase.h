@class CdnRenderStats, RotationControl, ScaleControl, VRProjectionModel, MMWeEffectManager, NSString;
@protocol CdnNotifyDelegate;

@interface CdnRenderViewBase : UIView <CdnRenderViewInterface> {
    long long _customrenderMode;
    long long _renderScene;
    BOOL _mirror;
    BOOL _renderable;
    int _streamType;
    struct CGSize { double width; double height; } _bufSize;
    float _currentScale;
    long long _rotation;
}

@property (weak, nonatomic) id<CdnNotifyDelegate> notifyDelegate;
@property (copy, nonatomic) id /* block */ layoutSubviewCallBack;
@property (retain, nonatomic) CdnRenderStats *renderStats;
@property (nonatomic) BOOL maskTexCoordInYReverse;
@property (nonatomic) BOOL maskTextureFilter;
@property (retain, nonatomic) VRProjectionModel *mVRProjectionModel;
@property (retain, nonatomic) RotationControl *mRotationControl;
@property (retain, nonatomic) ScaleControl *mScaleControl;
@property (weak) MMWeEffectManager *weeffectManager;
@property BOOL needProcessByWeffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkInitParamValidWithRenderMode:(long long)a0 renderScene:(long long)a1;

- (long long)fps;
- (void)setRotation:(long long)a0;
- (float)currentScale;
- (long long)currentRotation;
- (void)renderFrame:(id)a0;
- (void)renderFrame:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleGesturesOperation:(id)a0;
- (id)initRemoteViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderMode:(long long)a1 renderScene:(long long)a2;
- (void)pauseMonitor;
- (void)resetPitchAndYaw;
- (void)resetStats;
- (void)resumeMonitor;
- (void)setCustomrenderMode:(long long)a0;
- (void)setEnhanceParam:(int)a0;
- (void)setMaxMinHalfFOVHor:(float)a0 MaxVal:(float)a1;
- (void)setMaxMinHalfFOVVer:(float)a0 MaxVal:(float)a1;
- (void)setSensorControlFlag:(BOOL)a0 keepLastSensor:(BOOL)a1;
- (void)setTouchControlFlag:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getCdnRenderContext;
- (void)configCdnWeEffectManager:(id)a0;
- (void)updateNeedProcessByWeffect:(BOOL)a0;
- (double)getWeVisMgrCreateTime;
- (void)switchPrintRenderFps:(BOOL)a0;
- (void).cxx_destruct;

@end
