@class NSString, NSDictionary, LSGLContext, NSNumber, CIContext;

@interface LSGLFramebuffer : NSObject {
    unsigned int framebuffer;
    struct __CVBuffer { } *renderTarget;
    struct __CVBuffer { } *yuvRenderTarget;
    struct __CVBuffer { } *renderTexture;
    unsigned long long readLockCount;
    unsigned long long framebufferReferenceCount;
    BOOL referenceCountingDisabled;
    BOOL useOutPixelBuffer;
    CIContext *_ciContext;
}

@property (nonatomic) BOOL isSubFrame;
@property (retain, nonatomic) NSDictionary *subFramesMap;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } textureOptions;
@property (nonatomic) unsigned int texture;
@property (readonly) BOOL missingFramebuffer;
@property (readonly) BOOL bindPixBuffer;
@property (retain, nonatomic) NSString *lookupHash;
@property (retain, nonatomic) NSNumber *lookupHashNumber;
@property (readonly) LSGLContext *context;
@property (nonatomic) long long sourceID;
@property (retain, nonatomic) NSString *filterID;
@property (nonatomic) BOOL isAux;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL useYUVrenderTarget;

- (id)subFrameForIndex:(int)a0;
- (struct __CVBuffer { } *)yuvRenderTarget;
- (struct __CVBuffer { } *)generateYuvRenderTarget;
- (struct CGImage { } *)newCGImageFromFramebufferContents;
- (void)generateTexture;
- (void)generateFramebufferWithPixelbuffer:(BOOL)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2;
- (void)destroyFramebuffer;
- (void)unlockAfterReading;
- (struct __CVBuffer { } *)getCVPixelBufferFromTexture;
- (long long)getFramebufferReferenceCount;
- (void)enableReferenceCounting;
- (void)restoreRenderTarget;
- (char *)byteBuffer;
- (void)setYuvPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2 usePixelbuffer:(BOOL)a3 context:(id)a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })a1 onlyTexture:(BOOL)a2 context:(id)a3;
- (void)clearAllLocks;
- (void)activateFramebuffer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 texture:(int)a1 context:(id)a2;
- (void)disableReferenceCounting;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)lockForReading;
- (unsigned long long)bytesPerRow;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)generateFramebuffer;

@end
