@class NSMutableArray;

@interface IESHSLAdjustFilter : HTSGLFilter {
    int hslParam[8][3];
}

@property (retain, nonatomic) NSMutableArray *rgba;
@property (retain, nonatomic) NSMutableArray *tarHsl;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)initializeRenderer:(id)a0;
- (BOOL)setHSLParam:(id)a0;
- (void)p_resetTargetHslParam;
- (void)p_updateUniform;
- (int)getColorType:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
