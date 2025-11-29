@interface MMLiveILinkCompositerTextureWrap : NSObject

@property (nonatomic) struct __CVBuffer { } *openGLESTexture;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) unsigned long long textureWidth;
@property (nonatomic) unsigned long long textureHeight;
@property (nonatomic) unsigned int textureID;

- (void)dealloc;

@end
