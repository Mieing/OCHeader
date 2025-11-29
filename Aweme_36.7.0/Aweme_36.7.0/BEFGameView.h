@class NSString, CADisplayLink, NSTimer, EAGLContext, NSMutableArray, UILabel;

@interface BEFGameView : UIView

@property unsigned int colorBuffer;
@property unsigned int depthBuffer;
@property unsigned int frameBuffer;
@property unsigned int program;
@property unsigned int textureInput;
@property unsigned int textureOutput;
@property int positionAttribute;
@property int uvAttribute;
@property int textureUniform;
@property (retain, nonatomic) EAGLContext *context;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long framesPerSecond;
@property (retain, nonatomic) NSString *bundlePath;
@property void *befGameHandle;
@property float screenScale;
@property int designWidth;
@property int designHeight;
@property float topPos;
@property (retain) NSMutableArray *delegateArray;
@property (retain) NSMutableArray *messageQueue;
@property BOOL hasProcess;
@property (retain) UILabel *label;
@property (retain) NSTimer *labelTimer;
@property float renderTimeInterval;
@property BOOL bePaused;

+ (Class)layerClass;

- (void)onPause;
- (void)initLabel;
- (void)addMessageDelegate:(id)a0;
- (void)removeMessageDelegate:(id)a0;
- (void)checkContext;
- (void)initLayer;
- (void)destroyTextures;
- (void)createTextures;
- (void)createProgram;
- (void)initGameView;
- (void)labelTimerFired:(id)a0;
- (void)setFPS:(long long)a0;
- (void)_ProcessMessage;
- (void)renderWithTexture:(unsigned int)a0 left:(float)a1 right:(float)a2 top:(float)a3 bottom:(float)a4;
- (id)transformTouchEvent:(id)a0 forStatus:(unsigned long long)a1 on:(id)a2;
- (void)onTouch:(id)a0 touchCount:(unsigned long long)a1;
- (int)sendMessage:(unsigned int)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3;
- (BOOL)loadGamePath:(id)a0;
- (BOOL)loadGameFullPath:(id)a0;
- (BOOL)delegateProc:(unsigned int)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3;
- (void)process:(double)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setBundleName:(id)a0;
- (void)onResume;
- (void)displayLinkCallback:(id)a0;
- (void)destroyBuffers;
- (void)createBuffers;

@end
