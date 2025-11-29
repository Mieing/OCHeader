@interface TXCBGRADrawer : TXCGLDrawer {
    struct __CVBuffer { } *_textureRef;
}

@property (readonly, nonatomic) unsigned int rgbaTextureUniform;
@property (readonly, nonatomic) unsigned int textureTarget;
@property (nonatomic) unsigned int rgbaTexture;
@property (readonly, nonatomic) BOOL swapColorChannels;
@property (nonatomic) BOOL enablePerspective;

- (id)initWithContext:(id)a0 coords:(id)a1;
- (void)dealloc;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)drawTexture:(unsigned int)a0 width:(double)a1 height:(double)a2;
- (void)setupProgramIfNeed:(unsigned int)a0 swapColorChannels:(BOOL)a1;
- (void)draw;
- (void)setupCoordsAndDraw;

@end
