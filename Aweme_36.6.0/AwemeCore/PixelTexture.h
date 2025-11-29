@protocol MTLTexture;

@interface PixelTexture : NSObject

@property struct __CVBuffer { } *pixelBuffer;
@property (retain) id<MTLTexture> texture1;
@property (retain) id<MTLTexture> texture2;
@property (retain) id<MTLTexture> texture3;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 firstTex:(id)a1 secTex:(id)a2 thirdTex:(id)a3;
- (void)setTextureWithPlane:(int)a0 texture:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
