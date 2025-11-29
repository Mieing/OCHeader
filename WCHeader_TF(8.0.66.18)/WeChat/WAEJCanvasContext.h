@class EAGLContext, WAEJTextureCapture, NSValue;

@interface WAEJCanvasContext : NSObject {
    BOOL needsPresenting;
}

@property (nonatomic) BOOL preserveDrawingBuffer;
@property (nonatomic) BOOL msaaEnabled;
@property (nonatomic) int msaaSamples;
@property (nonatomic) short width;
@property (nonatomic) short height;
@property (nonatomic) double contentScale;
@property (nonatomic) short bufferWidth;
@property (nonatomic) short bufferHeight;
@property (readonly, nonatomic) EAGLContext *glContext;
@property (readonly, nonatomic) WAEJTextureCapture *textureCapture;
@property (nonatomic) BOOL stopRender;
@property (retain, nonatomic) NSValue *canvasContext;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) unsigned int canvasId;
@property (nonatomic) BOOL isEAGLViewOwner;
@property (nonatomic) unsigned int drawCall;
@property (nonatomic) unsigned int vertexCount;
@property (nonatomic) unsigned int triangleCount;
@property (nonatomic) BOOL firstRendered;

- (void)create;
- (void)flushBuffers;
- (void)prepare;
- (void)remove;
- (void)clearDrawCount;
- (void)resumeUpdate:(BOOL)a0;
- (id)getTexture;
- (id)captureImage;
- (void)dealloc;

@end
