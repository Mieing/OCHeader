@class EAGLContext, NSObject;
@protocol OS_dispatch_queue;

@interface LayerOpenGLContext : NSObject {
    struct __CVOpenGLESTextureCache { } *_cvTextureCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (readonly, retain, nonatomic) EAGLContext *context;
@property (readonly, nonatomic) struct __CVOpenGLESTextureCache { } *cvGLESTextureCache;

- (id)init;
- (void)dealloc;
- (struct __CVBuffer { } *)createGLTexture:(struct __CVBuffer { } *)a0 width:(int)a1 height:(int)a2 nativeiOSFormat:(int)a3 glFormat:(unsigned int)a4 planeIndex:(unsigned long long)a5;
- (struct __CVBuffer { } *)mapPixelBuffer:(struct __CVBuffer { } *)a0 type:(unsigned long long)a1;
- (id)createGLContext;
- (void)runSyncOnOpenGLESProcessQueue:(id /* block */)a0;
- (void)runAsyncOnOpenGLESProcessQueue:(id /* block */)a0;
- (void)runSyncOnOpenGLESProcessQueueTrue:(id /* block */)a0;
- (void).cxx_destruct;

@end
