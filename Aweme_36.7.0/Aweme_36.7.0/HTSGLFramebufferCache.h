@class HTSGLContext;
@protocol HTSFramebufferCacheProtocol;

@interface HTSGLFramebufferCache : NSObject {
    id<HTSFramebufferCacheProtocol> _framebufferCache;
    BOOL _enable10bitRtRender;
}

@property (weak, nonatomic) HTSGLContext *context;
@property (readonly, nonatomic) long long usedSize;
@property (readonly, nonatomic) long long cacheSize;

- (void)purgeAllUnassignedFramebuffers;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1;
- (void)addFramebufferToActiveImageCaptureList:(id)a0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)a0;
- (void)returnFramebufferToCache:(id)a0;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 textureColorType:(unsigned long long)a2 textureKey:(id)a3;
- (void)disableFrameBufferCache;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0;
- (id)fetchFramebufferForCVPixelBuffer:(struct CGSize { double x0; double x1; })a0 textureColorType:(unsigned long long)a1;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 textureColorType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
