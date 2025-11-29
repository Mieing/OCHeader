@interface WeVisGLTexture : NSObject {
    BOOL mOwnTextureId;
}

@property (nonatomic) struct __CVBuffer { } *texture;
@property (nonatomic) unsigned int textureId;
@property (nonatomic) struct CGSize { double width; double height; } texSize;

- (id)initWithTextureRef:(struct __CVBuffer { } *)a0 ownTextureId:(BOOL)a1;
- (id)initWithTarget:(unsigned int)a0 width:(int)a1 height:(int)a2 internalFormat:(int)a3 format:(unsigned int)a4 type:(unsigned int)a5 data:(const void *)a6;
- (id)initWithTarget:(unsigned int)a0 width:(int)a1 height:(int)a2 internalFormat:(int)a3 format:(unsigned int)a4 type:(unsigned int)a5 data:(const void *)a6 ownTexture:(BOOL)a7;
- (void)dealloc;

@end
