@class NSLock, HTSGLContext;

@interface _HTSFramebuffer : NSObject

@property unsigned long long readLockCount;
@property (retain, nonatomic) NSLock *refLock;
@property (nonatomic) BOOL enableRenderLib;
@property (nonatomic) struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *__ptr_; struct __shared_weak_count *__cntrl_; } teGLContext;
@property (nonatomic) void *teFrameBuffer;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL onlyTexture;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned int glTextureId;
@property (nonatomic) struct __CVBuffer { } *renderTarget;
@property (nonatomic) void *rlRenderingInfo;
@property (nonatomic, getter=getFrameBufferId, setter=setFrameBufferId:) unsigned int framebufferId;

+ (BOOL)isInBackground;
+ (int)instanceCount;

- (void)unlockAfterReading;
- (void)restoreRenderTarget;
- (char *)byteBuffer;
- (void)activateFramebuffer;
- (id)initWithExternalFramebuffer:(void *)a0 colorType:(unsigned long long)a1 context:(id)a2;
- (void)clearAllAttachments;
- (void *)getInnerFramebuffer;
- (id)initWithBufferSize:(struct CGSize { double x0; double x1; })a0 context:(id)a1 onlyTexture:(BOOL)a2 colorType:(unsigned long long)a3 disableCache:(BOOL)a4;
- (void)destroyTEFrameBuffer;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
- (void)uploadImageData:(void *)a0 withFilterType:(unsigned long long)a1;
- (void)downloadImageData:(void *)a0;
- (void)activateFramebuffer:(int)a0 offsetY:(int)a1 width:(int)a2 height:(int)a3;
- (void)clearInnerFramebuffer;
- (void *)rlReMapRenderingInfoTexture:(BOOL)a0;
- (void *)rlRenderingInfoMTLTexture;
- (void)setTextureFilterType:(unsigned long long)a0;
- (void)clearTextureWithRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)deActivateFramebuffer;
- (void *)rlRenderingInfoTexture;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)pixelBuffer;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)lockForReading;
- (unsigned long long)bytesPerRow;
- (unsigned int)textureId;

@end
