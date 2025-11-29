@class NSString, NSMutableArray, WADynamicBackgroundSystem;
@protocol WADynamicBackgroundGLViewControllerDelegate;

@interface WADynamicBackgroundGLViewController : WADynamicBackgroundGLBaseViewController <DynamicBackgroundSystemDelegate>

@property (nonatomic) union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } projectionMatrix;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) struct CGSize { double width; double height; } framebufferSize;
@property (nonatomic) unsigned int blurQuality;
@property (retain, nonatomic) NSMutableArray *blurs;
@property (nonatomic) BOOL isTryingDrawFirstFrame;
@property (nonatomic) BOOL isFirstFrameDrawed;
@property (retain, nonatomic) WADynamicBackgroundSystem *backgroundSystem;
@property (weak, nonatomic) id<WADynamicBackgroundGLViewControllerDelegate> mDelegate;
@property (nonatomic) BOOL canDraw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)becomeUnvisible;
- (void)createDynamicBackground;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })getVector4ColorFromHex:(int)a0 alpha:(double)a1;
- (void)createTextureFrameBuffer:(unsigned int *)a0 toTexture:(unsigned int *)a1 framebufferSize:(struct CGSize { double x0; double x1; })a2;
- (id)createPlaneWithTexture:(unsigned int)a0 directionX:(unsigned int)a1 needColorMatrix:(unsigned int)a2;
- (void)update;
- (void)drawObjects;
- (void)drawPlane:(id)a0;
- (BOOL)isBackground;
- (void)setPaused:(BOOL)a0;
- (void)tryDrawFirstFrame;
- (void)endTryDrawFirstFrame;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a0 color2:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1;
- (BOOL)isCurrentTimeInDarkStyle;
- (void).cxx_destruct;

@end
