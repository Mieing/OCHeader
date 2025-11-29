@class EAGLContext, TXCDispatchQueue, NSString;

@interface TXCGlContext : NSObject <TXIGlContext>

@property (retain, nonatomic) EAGLContext *context;
@property (retain, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) struct __CVOpenGLESTextureCache { } *textureCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsFastTextureUpload:(unsigned long long)a0;

- (id)initWithContext:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)makeCurrent;
- (void)unmakeCurrent;
- (void)syncRunGlCommands:(id /* block */)a0;
- (void)runGlCommands:(id /* block */)a0;
- (void)runGlCommands:(id /* block */)a0 handlerInBackground:(id /* block */)a1;
- (void)runInGLQueue:(id /* block */)a0;
- (void)assertContextIsCurrent;
- (BOOL)supportsSetUnpackRowLength;
- (unsigned int)createTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 plane:(long long)a1 format:(int)a2;
- (id)createContextFromContext:(id)a0;
- (BOOL)createTextureCache;
- (void).cxx_destruct;

@end
