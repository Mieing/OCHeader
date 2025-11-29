@class EAGLContext, MAShader;

@interface MAGLESResourceProvider : NSObject {
    MAShader *_colorPolygonShader;
    MAShader *_texturePolygonShader;
    MAShader *_singleColorLineShader;
    MAShader *_textureLineShader;
    MAShader *_gradientColorLineShader;
    unsigned int _lineDashTextureDot;
    unsigned int _lineDashTextureSquare;
    unsigned int _lineTexture;
    unsigned int _lineTextureThin;
}

@property (readonly, weak, nonatomic) EAGLContext *context;
@property (readonly, nonatomic) MAShader *colorPolygonShader;
@property (readonly, nonatomic) MAShader *texturePolygonShader;
@property (readonly, nonatomic) MAShader *textureLineShader;
@property (readonly, nonatomic) MAShader *gradientColorLineShader;
@property (readonly, nonatomic) unsigned int lineDashTextureSquare;
@property (readonly, nonatomic) unsigned int lineDashTextureDot;
@property (readonly, nonatomic) unsigned int lineTexture;
@property (readonly, nonatomic) unsigned int lineTextureThin;
@property (readonly, nonatomic) struct CGSize { double width; double height; } lineDashTextureSquareSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } lineDashTextureDotSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } lineTextureSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } lineTextureThinSize;

- (void)clearTextures;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContext:(id)a0;

@end
