@class MMGPUGLProgram;

@interface MMGPUOneTextureRender : NSObject {
    MMGPUGLProgram *renderProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize { double width; double height; } currentFilterSize;
    unsigned int texture;
    unsigned int framebuffer;
    unsigned long long inputRotation;
}

- (id)init;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderString:(id)a1;
- (id)initWithFragmentShaderFromString:(id)a0;
- (void)destroybuffers;
- (BOOL)checkGLError;
- (BOOL)updatebuffer:(struct CGSize { double x0; double x1; })a0;
- (void)initializeAttributes;
- (int)renderToTextue:(int)a0 inputRes:(struct CGSize { double x0; double x1; })a1;
- (int)getTextureID;
- (void)setInteger:(int)a0 forUniform:(int)a1;
- (void)setFloat:(float)a0 forUniform:(int)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
