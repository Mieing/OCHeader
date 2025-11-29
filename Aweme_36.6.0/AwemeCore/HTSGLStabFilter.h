@class VEMVPRenderer, NSArray;

@interface HTSGLStabFilter : HTSGLFilter

@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) NSArray *stabMatrix;
@property (nonatomic) struct CGSize { double width; double height; } stabProcessSize;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (id)p_scaleMatrix:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
