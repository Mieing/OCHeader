@interface WeVisGLComposeElement : NSObject {
    struct __CVBuffer { } *texY;
    struct __CVBuffer { } *texUV;
    struct __CVOpenGLESTextureCache { } *cvTextureCache;
}

@property (nonatomic) long long formatType;
@property (nonatomic) unsigned int textureY;
@property (nonatomic) unsigned int textureUV;
@property (nonatomic) unsigned int textureRGBA;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;

- (void)dealloc;
- (void)setSharedCVTexCache:(struct __CVOpenGLESTextureCache { } *)a0;
- (void)transferFromRenderFrame:(id)a0;
- (BOOL)isValid;
- (void)clear;
- (BOOL)getTexYUVFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (long long)getElementFormatFromRenderFormat:(id)a0;

@end
