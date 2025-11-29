@class IESMMSampleBufferInfo, NSString, _HTSFramebuffer, NSLock, HTSGLContext;

@interface HTSGLFramebuffer : NSObject

@property unsigned long long framebufferReferenceCount;
@property (retain, nonatomic) NSLock *refLock;
@property (nonatomic) BOOL enableRenderLib;
@property (retain, nonatomic) _HTSFramebuffer *innerFramebuffer;
@property (nonatomic) BOOL useRectangle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) unsigned int textureId;
@property (retain, nonatomic) NSString *lookupHash;
@property (readonly, nonatomic) HTSGLContext *context;
@property (readonly, nonatomic) BOOL disableCache;
@property (nonatomic) long long sourceID;
@property (retain, nonatomic) NSString *filterID;
@property (nonatomic) long long videoTrackId;
@property (readonly, nonatomic) long long sizeByte;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } realFramePts;
@property (retain, nonatomic) IESMMSampleBufferInfo *sampleInfo;

+ (id)hashForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 textureColorType:(unsigned long long)a2 needsRLContext:(BOOL)a3 useRectangle:(BOOL)a4;
+ (int)instanceCount;

- (struct CGImage { } *)newCGImageFromFramebufferContents;
- (void)unlockAfterReading;
- (long long)getFramebufferReferenceCount;
- (void)restoreRenderTarget;
- (char *)byteBuffer;
- (void)clearAllLocks;
- (void)activateFramebuffer;
- (id)initWithExternalFramebuffer:(id)a0;
- (void)clearAllAttachments;
- (id)getInnerFramebuffer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 disableCache:(BOOL)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 disableCache:(BOOL)a2 context:(id)a3;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
- (void)uploadImageData:(void *)a0 withFilterType:(unsigned long long)a1;
- (void)downloadImageData:(void *)a0;
- (void)activateFramebuffer:(int)a0 offsetY:(int)a1 width:(int)a2 height:(int)a3;
- (struct CGImage { } *)newCGImageFromFramebufferContentsWithColorSpace:(struct __CFString { } *)a0;
- (struct CGImage { } *)newCGImageFromFramebufferContentsWithColorSpace:(struct __CFString { } *)a0 needAlpha:(BOOL)a1;
- (BOOL)newRawImageDataFromFramebufferContents:(char *)a0 requiredWidth:(int)a1 requiredHeight:(int)a2;
- (BOOL)imageDataResample:(char *)a0 withDest:(char *)a1 withDstWidth:(int)a2 withDstHeight:(int)a3;
- (void *)rlReMapRenderingInfoTexture:(BOOL)a0;
- (unsigned int)getFrameBufferId;
- (void *)rlRenderingInfoMTLTexture;
- (void)setTextureFilterType:(unsigned long long)a0;
- (void)clearTextureWithRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 disableCache:(BOOL)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1 disableCache:(BOOL)a2 useRectangle:(BOOL)a3 context:(id)a4;
- (unsigned long long)getTextureColorType;
- (void)uploadImageData:(void *)a0;
- (void *)rlRenderingInfo;
- (void)deActivateFramebuffer;
- (void *)rlRenderingInfoTexture;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void *)device;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)debugDescription;
- (void)lockForReading;
- (unsigned long long)bytesPerRow;
- (void)unlock:(BOOL)a0;

@end
