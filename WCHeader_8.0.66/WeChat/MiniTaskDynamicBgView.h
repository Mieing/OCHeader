@class CAGradientLayer, NSString, WADynamicBackgroundGLViewController, DynamicBackgroundSystemConfig, UIView, CADisplayLink;

@interface MiniTaskDynamicBgView : UIView <WADynamicBackgroundGLViewControllerDelegate, WCMainWindowExt>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC;
@property (retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig;
@property (nonatomic) BOOL canUseDynamicBackground;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double manualColorRatio;
@property (nonatomic) BOOL isInDarkMode;
@property (retain, nonatomic) UIView *backgroundCoverView;
@property (nonatomic) BOOL useStaticBgColorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)buildDynamicBackground;
- (void)buildBackgroundLayer;
- (void)buildGLLayer;
- (void)buildManualBackground;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackgroundDisplayLink;
- (void)layoutSubviews;
- (void)showDynamicBgView;
- (void)pauseDynamicBgView;
- (void)showStaticBgView;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a0 color2:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1;
- (void)backgroundDisplayLink:(id)a0;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })getBGColorFromStartConfig:(id)a0 endConfig:(id)a1 bgIndex:(unsigned int)a2 portion:(double)a3;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })mixColorWithA:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a0 b:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1 portion:(double)a2;
- (void)detectDarkMode;
- (void)mm_onColorAppearanceDidChange;
- (void).cxx_destruct;

@end
