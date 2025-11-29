@interface TXCiOSNV12Drawer : TXCBaseYUVDrawer {
    struct __CVBuffer { } *_yTextureRef;
    struct __CVBuffer { } *_uvTextureRef;
}

@property (readonly, nonatomic) unsigned int yUniform;
@property (readonly, nonatomic) unsigned int uvUniform;

- (unsigned int)yTexture;
- (unsigned int)uvTexture;
- (id)initWithContext:(id)a0 coords:(id)a1;
- (void)dealloc;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)drawTexture:(unsigned int)a0 width:(double)a1 height:(double)a2;
- (void)setupProgramIfNeed;
- (void)uploadTextures:(struct __CVBuffer { } *)a0;
- (void)draw;

@end
