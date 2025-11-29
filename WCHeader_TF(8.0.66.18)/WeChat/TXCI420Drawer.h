@interface TXCI420Drawer : TXCBaseYUVDrawer

@property (readonly, nonatomic) unsigned int yTexture;
@property (readonly, nonatomic) unsigned int uTexture;
@property (readonly, nonatomic) unsigned int vTexture;
@property (readonly, nonatomic) unsigned int yUniform;
@property (readonly, nonatomic) unsigned int uUniform;
@property (readonly, nonatomic) unsigned int vUniform;

- (id)initWithContext:(id)a0 coords:(id)a1;
- (void)dealloc;
- (void)setupTextures;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)drawTexture:(unsigned int)a0 width:(double)a1 height:(double)a2;
- (void)setupProgramIfNeed;
- (void)uploadTextures:(struct __CVBuffer { } *)a0;
- (void)draw;

@end
