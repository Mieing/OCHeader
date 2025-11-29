@class EJTextureHolder, NSMutableDictionary, EJTextureProgram, WAEJJavaScriptView, EAGLContext, WAEJCanvasContext, EJStatusHolder;

@interface WAEJTextureCapture : NSObject {
    WAEJJavaScriptView *_scriptView;
    WAEJCanvasContext *_canvas;
    EJStatusHolder *_status;
    BOOL _available;
    BOOL _storage;
    int _viewWidth;
    int _viewHeight;
    unsigned int _presentCount;
    unsigned int _flipCount;
    unsigned int _captureCount;
}

@property BOOL hooked;
@property BOOL switchNeed;
@property BOOL autoCapture;
@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) EJTextureHolder *renderTexture;
@property (retain, nonatomic) EJTextureHolder *flipTexture;
@property (readonly, nonatomic) EAGLContext *context;
@property (nonatomic) unsigned int frameBuffer;
@property (nonatomic) unsigned int renderBuffer;
@property (retain, nonatomic) EJTextureProgram *program1;
@property (retain, nonatomic) EJTextureProgram *program2;
@property (readonly, nonatomic) BOOL hook;
@property (readonly, nonatomic) BOOL needSwitch;
@property (readonly, nonatomic) BOOL ready;
@property (nonatomic) BOOL offScreen;
@property (readonly, nonatomic) int buffWidth;
@property (readonly, nonatomic) int buffHeight;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)initWithCanvas:(id)a0 canvas:(id)a1;
- (void)dealloc;
- (BOOL)create;
- (void)destroy;
- (BOOL)checkAvailable;
- (unsigned int)realWidth;
- (unsigned int)realHeight;
- (BOOL)bindTexture:(unsigned int)a0 height:(unsigned int)a1;
- (BOOL)renderLayer:(id)a0;
- (BOOL)renderStorage:(id)a0;
- (BOOL)renderPresent:(int)a0 height:(int)a1;
- (BOOL)flip:(int)a0 height:(int)a1;
- (void)capture;
- (void)presentCapture:(int)a0 height:(int)a1;
- (void)recordCapture:(int)a0 height:(int)a1;
- (void)runOnMainThread:(id /* block */)a0;
- (BOOL)addCaptureDelegate:(unsigned int)a0 options:(id)a1 delegate:(id)a2;
- (BOOL)delCaptureDelegate:(unsigned int)a0;

@end
