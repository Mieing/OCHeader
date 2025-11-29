@class CMMotionManager, UIView, IESECTracker, BDImageView;

@interface IESECPanoramaImage : LynxUI

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) BOOL isStaticImage;
@property (nonatomic) struct CGPoint { double x; double y; } originOffect;
@property (nonatomic) struct CGVector { double dx; double dy; } rotateAngle;
@property (nonatomic) double maxRotateAngle;
@property (nonatomic) double lastTimeStamp;
@property (nonatomic) double imageWidthScale;
@property (nonatomic) double imageHeightScale;
@property (nonatomic) BOOL autoDetect;
@property (nonatomic) double updateInterval;
@property (nonatomic) double sensitive;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) IESECTracker *tracker;

+ (void)registerPanoramaImage;
+ (id)__lynx_prop_config__480;
+ (id)__lynx_prop_config__551;
+ (id)__lynx_prop_config__623;
+ (id)__lynx_prop_config__695;
+ (id)__lynx_prop_config__756;
+ (id)__lynx_prop_config__817;
+ (id)__lynx_prop_config__8810;
+ (id)__lynx_ui_method_config__9511;
+ (id)__lynx_ui_method_config__10112;
+ (id)__lynx_ui_method_config__10713;
+ (id)__lynx_ui_method_config__11314;

- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)src:(id)a0 requestReset:(BOOL)a1;
- (void)didReady;
- (void)reload:(id)a0 withResult:(id /* block */)a1;
- (void)startMonitorMotion;
- (void)stopMonitorMotion;
- (void)transformImage;
- (void)didMotionUpdate;
- (void)imageWidthScale:(double)a0 requestReset:(BOOL)a1;
- (void)imageHeightScale:(double)a0 requestReset:(BOOL)a1;
- (void)autoDetect:(BOOL)a0 requestReset:(BOOL)a1;
- (void)updateInterval:(double)a0 requestReset:(BOOL)a1;
- (void)sensitive:(double)a0 requestReset:(BOOL)a1;
- (void)animationDuration:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;
- (void)updateImageSize;

@end
