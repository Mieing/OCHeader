@class MMLiveTextureBuffer;

@interface CdnRenderFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) char *texBuff;
@property (nonatomic) int texture;
@property (nonatomic) struct CGSize { double width; double height; } textureSize;
@property (nonatomic) int maskTexture;
@property (retain, nonatomic) MMLiveTextureBuffer *maskTexBuffer;
@property (nonatomic) struct CGSize { double width; double height; } maskTextureSize;

- (void).cxx_destruct;

@end
