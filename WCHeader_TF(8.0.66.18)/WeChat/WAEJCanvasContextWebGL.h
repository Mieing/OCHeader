@class WAEJJavaScriptView;

@interface WAEJCanvasContextWebGL : WAEJCanvasContext {
    unsigned int viewFrameBuffer;
    unsigned int viewRenderBuffer;
    unsigned int msaaFrameBuffer;
    unsigned int msaaRenderBuffer;
    unsigned int boundFrameBuffer;
    unsigned int boundRenderBuffer;
    unsigned int depthStencilBuffer;
    WAEJJavaScriptView *scriptView;
}

@property (nonatomic) BOOL needsPresenting;

- (id)initWithScriptView:(id)a0 width:(short)a1 height:(short)a2 screenGroup:(BOOL)a3;
- (void)resizeToWidth:(short)a0 height:(short)a1;
- (void)resizeAuxiliaryBuffers;
- (void)create;
- (void)dealloc;
- (void)prepare;
- (void)setStopRender:(BOOL)a0;
- (void)clear;
- (void)bindFramebuffer:(int)a0 toTarget:(unsigned int)a1;
- (void)bindRenderbuffer:(int)a0 toTarget:(unsigned int)a1;
- (void)setWidth:(short)a0;
- (void)setHeight:(short)a0;

@end
