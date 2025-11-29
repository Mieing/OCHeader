@class UIColor, CADisplayLink, UIImage, CAShapeLayer, NSMutableArray;

@interface LynxBackgroundSubBackgroundLayer : LynxBackgroundSubLayer {
    BOOL _needCalculateInterval;
    double _singleFrameDuration;
    double _elapsedDuration;
}

@property BOOL isPreRendering;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain) NSMutableArray *frameQueue;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } cornerRadii;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (retain, nonatomic) UIColor *layerBackgroundColor;
@property (nonatomic) BOOL drawToEdge;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL contentsUpdating;
@property (retain, nonatomic) UIImage *currentBackgroundImage;
@property (nonatomic) BOOL isGradientOnly;
@property (retain, nonatomic) CAShapeLayer *colorLayer;
@property (nonatomic) BOOL isPixelated;
@property (nonatomic) BOOL isAnimated;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) double animatedImageDuration;
@property (nonatomic) BOOL enableAsyncDisplay;
@property (nonatomic) long long backgroundColorClip;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shadowsBounds;

+ (id)concurrentDispatchQueue;

- (void)setImageArray:(id)a0;
- (void)updateFrame:(id)a0;
- (void)setAnimatedPropsWithImage:(id)a0;
- (void)markDirtyWithSize:(struct CGSize { double x0; double x1; })a0 radii:(struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })a1 borderInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 backgroundColor:(id)a3 drawToEdge:(BOOL)a4 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5 isGradientOnly:(BOOL)a6 isPixelated:(BOOL)a7;
- (void)detachAllGradientLayers;
- (void)clearAnimatedImage;
- (void)onContentsUpdate;
- (void)autoAdjustInsetsForContents:(id)a0;
- (void)applyStaticBackground;
- (BOOL)canCacheAllFrames;
- (void)enqueueFrames:(long long)a0;
- (id /* block */)createFrameCacheTask:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)display;
- (void)stopAnimation;
- (void)layoutSublayers;
- (void)dealloc;
- (void)updateGradient;

@end
