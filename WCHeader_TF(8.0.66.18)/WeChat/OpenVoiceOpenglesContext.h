@class EAGLContext, CAEAGLLayer;
@protocol OpenVoiceOpenglesContextDelegate;

@interface OpenVoiceOpenglesContext : MMObject {
    char *m_pData[3];
    int srcWidth;
    int srcHeight;
    int dstWidth;
    int dstHeight;
    BOOL sizeChanged;
    unsigned int _colorRenderBuffer;
    unsigned int _YPlanarTexture;
    unsigned int _UPlanarTexture;
    unsigned int _VPlanarTexture;
    unsigned int _UVPlanarTexture;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformUV;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int rotateUniform;
    unsigned int framebuffer;
    unsigned int vertexBuffer;
    unsigned int indexBuffer;
    float _degrees;
    BOOL _full;
    float _viewWidth;
    float _viewHeight;
    BOOL _hasInit;
    BOOL _isNV12;
    BOOL _isMirrored;
    BOOL needUpdateParam;
    int notInitErrorCnt;
}

@property (retain, nonatomic) EAGLContext *_context;
@property (retain, nonatomic) CAEAGLLayer *_eaglLayer;
@property (nonatomic) BOOL fitView;
@property (nonatomic) int objectFit;
@property (nonatomic) BOOL m_deleteFlag;
@property (weak, nonatomic) id<OpenVoiceOpenglesContextDelegate> m_delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupELGS:(id)a0;
- (void)setupELGS:(id)a0 IsNV12:(BOOL)a1 IsMirrored:(BOOL)a2;
- (void)internalSetupELGS:(id)a0 IsNV12:(BOOL)a1 IsMirrored:(BOOL)a2;
- (void)deleteELGS;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)renderImage:(char *)a0 Swidth:(unsigned int)a1 Sheight:(unsigned int)a2 Dwidth:(unsigned int)a3 Dheight:(unsigned int)a4;
- (void)renderImage2:(char **)a0 Swidth:(unsigned int)a1 Sheight:(unsigned int)a2 Dwidth:(unsigned int)a3 Dheight:(unsigned int)a4;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 FitView:(BOOL)a3;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 objectFit:(int)a3;
- (void)setupLayer:(id)a0;
- (void)setupContext;
- (void)setupIndices;
- (void)setupRenderBuffer;
- (void)setupFrameBuffer;
- (unsigned int)textureYUV:(char *)a0 widthType:(int)a1 heightType:(int)a2;
- (unsigned int)textureYUVNV12:(char *)a0 widthType:(int)a1 heightType:(int)a2;
- (void)updateTextureYUV:(char *)a0 widthType:(int)a1 heightType:(int)a2 texName:(unsigned int)a3;
- (void)updateTextureYUVNV12:(char *)a0 widthType:(int)a1 heightType:(int)a2 texName:(unsigned int)a3;
- (void)updateRenderParam:(BOOL)a0;
- (void)drawFrame:(BOOL)a0;
- (unsigned int)compileShader:(id)a0 withType:(unsigned int)a1;
- (void)resetMirrored:(BOOL)a0;
- (void)setDegrees:(float)a0;
- (float)getDegrees;
- (BOOL)isUnmatch;
- (void)applyRotation:(float)a0;
- (void)compileShaders;
- (void).cxx_destruct;

@end
