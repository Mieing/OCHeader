@class OTTextureHolder, OTTextureProgram, EAGLContext, OTStatusHolder;

@interface MMGameOffTexture : NSObject {
    struct __CVOpenGLESTextureCache { } *_textureCache;
    BOOL _textureCacheAvailable;
}

@property (retain, nonatomic) OTStatusHolder *status;
@property (retain, nonatomic) EAGLContext *context;
@property (nonatomic) unsigned int frameBuffer;
@property (retain, nonatomic) OTTextureHolder *flipTexture;
@property (retain, nonatomic) OTTextureProgram *program;

- (id)init;
- (void)dealloc;
- (void)tryInit;
- (void)tryUint;
- (struct __CVBuffer { } *)draw:(void *)a0 size:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (void).cxx_destruct;

@end
