@class EAGLView, MagicBrushCore;
@protocol IMBExternalViewDelegate, IMBExternalTextureDelegate;

@interface MBExternalViewStub : UIView

@property (retain, nonatomic) EAGLView *eaglView;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL firstFrame;
@property (nonatomic) struct __CVBuffer { } *pixelbuffer;
@property (nonatomic) struct __CVBuffer { } *copiedPixelBuffer;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (copy, nonatomic) id /* block */ oneTimeFrameCallback;
@property (copy, nonatomic) id /* block */ frameCallback;
@property (nonatomic) int canvasId;
@property (weak, nonatomic) MagicBrushCore *mb;
@property (weak, nonatomic) id<IMBExternalViewDelegate> externalViewDelegate;
@property (copy, nonatomic) id /* block */ whiteCheckCallback;
@property (nonatomic) long long dangerControl;
@property (weak, nonatomic) id<IMBExternalTextureDelegate> externalTextureDelegate;

- (id)initWithExternalViewDelegate:(id)a0;
- (void)setupCallback;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (BOOL)setFlutterCanvasMaxFps:(BOOL)a0 duration:(int)a1;
- (void)dealloc;
- (void)registerPixelBufferCallback:(id /* block */)a0;
- (void)unregisterPixelBufferCallback;
- (void)notifyTouchesBegan:(id)a0 withEvent:(id)a1;
- (void)notifyTouchesEnded:(id)a0 withEvent:(id)a1;
- (void)notifyTouchesMoved:(id)a0 withEvent:(id)a1;
- (void)notifyTouchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onExternalTouchEvent:(id)a0;
- (void)onExternalTouchEventForMB:(id)a0;
- (void)takeSnapshot:(id /* block */)a0;
- (BOOL)checkPixelBufferEnable;
- (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)wrapWhiteCheckDelayForOneSecond;
- (void)doWhiteCheckAndCallback;
- (id)tryDetectCVPixelBufferEmpty:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
