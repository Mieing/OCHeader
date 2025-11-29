@class NSString, QGLOverlayRenderMode, QModelOverlayAnimationLayer;

@interface QModelOverlay : QGLOverlay <CAAnimationDelegate> {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double anchorX;
@property (nonatomic) double anchorY;
@property (nonatomic) double anchorZ;
@property (retain, nonatomic) QModelOverlayAnimationLayer *animLayer;
@property (retain, nonatomic) QGLOverlayRenderMode *renderMode;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double altitude;
@property (nonatomic) double rotationX;
@property (nonatomic) double rotationY;
@property (nonatomic) double rotationZ;
@property (nonatomic) long long animateType;
@property (nonatomic) double exposure;
@property (nonatomic, getter=isUnlit) BOOL unlit;

- (void)setMaterialVariant:(unsigned long long)a0;
- (int)getCurrentMaterialVariant;
- (id)getMaterialVariantsInfo;
- (void)setMonoColor:(id)a0;
- (void)resetMonoColor;
- (void)setAnamtaion:(id)a0 forKey:(id)a1 withMapView:(id)a2;
- (void)startTranslateAnimation:(id)a0 duration:(double)a1 initRotation:(double)a2 autoRotate:(BOOL)a3;
- (id)generateAnimationLocations:(id)a0;
- (void)didChangeRotation:(double)a0;
- (void)didChangeCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)shouldTriggerAnimDidStopDelegate:(id)a0;
- (void)setPosition:(id)a0 error:(id *)a1;
- (id)getPosition:(id)a0 error:(id *)a1;
- (void)setScale:(id)a0 error:(id *)a1;
- (id)getScale:(id)a0 error:(id *)a1;
- (void)setRotation:(id)a0 error:(id *)a1;
- (id)getRotation:(id)a0 error:(id *)a1;
- (void)playSkeletonAnimation:(id)a0 error:(id *)a1;
- (void)stopSkeletonAnimation:(id)a0 error:(id *)a1;
- (id)getSkeletonAnimationInfo:(id)a0 error:(id *)a1;
- (void)setExposure:(id)a0 error:(id *)a1;
- (id)getExposure:(id)a0 error:(id *)a1;
- (void)setPixelBound:(id)a0 error:(id *)a1;
- (void)startTranslateAnimation:(id)a0 error:(id *)a1;
- (id)getMaterialVariantsInfo:(id)a0 error:(id *)a1;
- (void)setMaterialVariant:(id)a0 error:(id *)a1;
- (id)getCurrentMaterialVariant:(id)a0 error:(id *)a1;
- (void)setMonoColor:(id)a0 error:(id *)a1;
- (void)resetMonoColor:(id)a0 error:(id *)a1;
- (void)enableUnlit:(id)a0 error:(id *)a1;
- (id)getUnlitEnabled:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)isSupportClick;
- (void)setInteractive:(BOOL)a0;
- (void)setNeedsDisplay;
- (void)setAnchorX:(double)a0 Y:(double)a1 Z:(double)a2;
- (int)getNativeAnimationType;
- (void)updateLayerData:(void *)a0;
- (void *)createImpl;
- (void)destoryImpl;
- (id)getType;
- (double)normalizeRotation:(double)a0;
- (void)notifyOverlayProgress:(double)a0 hasError:(BOOL)a1;
- (void)notifOverlayDidTapWithOverlayObject:(id)a0;
- (void)playAnimationWithIndex:(int)a0 speed:(float)a1 autoRepeat:(BOOL)a2;
- (void)stopAnimation;
- (id)getAnimationInformation;
- (BOOL)isAnimationPlaying;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingMapRect;
- (void).cxx_destruct;

@end
