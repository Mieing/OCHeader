@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, LSGLContextProtocol;

@interface LSGLFramebufferCache : NSObject {
    NSMutableDictionary *framebufferCache;
    NSMutableArray *frametextureCache;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
    struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } _defaultTextureOptions;
    BOOL _usePerformanceOptLogic;
}

@property (nonatomic) BOOL reloadTextureFlag;
@property (weak, nonatomic) id<LSGLContextProtocol> context;

- (void)purgeAllUnassignedFramebuffers;
- (id)hashNumberForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1;
- (id)hashForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2;
- (void)unRegisterMemoryWarningNotify;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1;
- (void)purgeAllUnassignedFramebuffersExceptForSize:(struct CGSize { double x0; double x1; })a0;
- (void)addFramebufferToActiveImageCaptureList:(id)a0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)a0;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2 bindPixelbuffer:(BOOL)a3;
- (void)returnFramebufferToCache:(id)a0;
- (void)registerMemoryWarningNotify;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
