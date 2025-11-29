@class HTSGLContext, NSString, NSMutableArray;

@interface _HTSCppFramebufferCache : NSObject <VEAppStatusProtocol, HTSFramebufferCacheProtocol> {
    NSMutableArray *_activeImageCaptureList;
    BOOL _isDeallocing;
}

@property (weak, nonatomic) HTSGLContext *context;
@property (nonatomic) void *teFrameBufferCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purgeAllUnassignedFramebuffers;
- (void)addFramebufferToActiveImageCaptureList:(id)a0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)a0;
- (void)returnFramebufferToCache:(id)a0;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 textureColorType:(unsigned long long)a2 textureKey:(id)a3;
- (id)fetchFramebufferForBindCVPixelbuffer:(struct CGSize { double x0; double x1; })a0 textureColorType:(unsigned long long)a1;
- (void)disableFrameBufferCache;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 textureColorType:(unsigned long long)a2;
- (void)becomeActive;
- (void).cxx_destruct;
- (long long)cacheSize;
- (void)enterBackground;
- (void)resignActive;
- (id)init;
- (long long)usedSize;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end
