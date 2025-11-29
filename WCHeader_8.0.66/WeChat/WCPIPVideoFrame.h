@class MMLivePixelBuffer, CIImage, NSString;

@interface WCPIPVideoFrame : WCPIPRenderObj <NSCopying>

@property (retain) MMLivePixelBuffer *pixelBufferObj;
@property (retain) MMLivePixelBuffer *cachedAspectPixelBufferObj;
@property (retain) CIImage *cachedFillImage;
@property (nonatomic) unsigned long long srcType;
@property (nonatomic) BOOL flipX;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) unsigned long long renderMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSrcValid;
- (void).cxx_destruct;

@end
