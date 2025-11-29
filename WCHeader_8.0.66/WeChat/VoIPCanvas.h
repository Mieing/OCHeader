@class VoIPCanvasBuffer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

@interface VoIPCanvas : NSObject {
    struct __CVMetalTextureCache { } *_metalTextureCache;
}

@property (retain, nonatomic) VoIPCanvasBuffer *buffer;
@property (retain, nonatomic) NSMutableArray *mutablePlugins;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) BOOL isRendering;
@property (nonatomic) BOOL needRender;

- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 queue:(id)a2;
- (id)initWithBuffer:(id)a0 metalTextureCache:(struct __CVMetalTextureCache { } *)a1 device:(id)a2 commandQueue:(id)a3 width:(unsigned long long)a4 height:(unsigned long long)a5 queue:(id)a6;
- (void)dealloc;
- (void)addPlugin:(id)a0;
- (void)delPlugin:(id)a0;
- (void)resizeWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)render;
- (struct __CVBuffer { } *)createMetalTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 planeIndex:(long long)a2;
- (void)clear;
- (void).cxx_destruct;

@end
