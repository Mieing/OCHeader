@interface GPUImageFramebuffer : NSObject {
    unsigned int framebuffer;
    unsigned int _depthbuffer;
    unsigned int frameLumabuffer;
    unsigned int frameChromabuffer;
    struct __CVBuffer { } *renderTarget;
    struct __CVBuffer { } *renderTexture;
    unsigned long long readLockCount;
    struct __CVBuffer { } *renderYUV420Target;
    struct __CVBuffer { } *renderLumaTexture;
    struct __CVBuffer { } *renderChromaTexture;
    unsigned long long framebufferReferenceCount;
    BOOL referenceCountingDisabled;
    BOOL generateFrameBufferSuccess;
}

@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct GPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; BOOL useDepth; } textureOptions;
@property (readonly) unsigned int texture;
@property (readonly) unsigned int lumaTexture;
@property (readonly) unsigned int chromaTexture;
@property (readonly) BOOL missingFramebuffer;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct GPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; })a1 onlyTexture:(BOOL)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct GPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; })a1 onlyTexture:(BOOL)a2 useRGB2YUV420:(BOOL)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 overriddenTexture:(unsigned int)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)generateTexture;
- (void)generateDepthBuffer:(struct CGSize { double x0; double x1; })a0;
- (void)generateFramebuffer;
- (void)generateYUV420Framebuffer;
- (void)destroyFramebuffer;
- (void)activateFramebuffer;
- (void)activateLumaFramebuffer;
- (void)activateChromaFramebuffer;
- (void)lock;
- (void)unlock;
- (void)clearAllLocks;
- (void)disableReferenceCounting;
- (void)enableReferenceCounting;
- (struct CGImage { } *)newCGImageFromFramebufferContents;
- (struct CGImage { } *)newCGImageFromFramebufferContentsExt;
- (void)restoreRenderTarget;
- (void)lockForReading;
- (void)unlockAfterReading;
- (unsigned long long)bytesPerRow;
- (char *)byteBuffer;
- (struct __CVBuffer { } *)pixelBuffer;
- (struct __CVBuffer { } *)getRenderYUV420Target;
- (void)getPixelsFromFramebufferContentsVoipExt:(char *)a0;

@end
