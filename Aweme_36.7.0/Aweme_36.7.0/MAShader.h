@class EAGLContext, NSString;

@interface MAShader : NSObject

@property (weak, nonatomic) EAGLContext *context;
@property (retain, nonatomic) NSString *vertexShaderSrc;
@property (retain, nonatomic) NSString *fragmentShaderSrc;
@property (readonly, nonatomic) unsigned int programName;
@property (readonly, nonatomic) int attribute_position_location;
@property (readonly, nonatomic) int attribute_positionColor_location;
@property (readonly, nonatomic) int attribute_texCoord_location;
@property (readonly, nonatomic) int attribute_indexCoord_location;
@property (readonly, nonatomic) int uniform_positionOffset_location;
@property (readonly, nonatomic) int uniform_viewMatrix_location;
@property (readonly, nonatomic) int uniform_projMatrix_location;
@property (readonly, nonatomic) int uniform_color_location;
@property (readonly, nonatomic) int uniform_textureUnit_location;
@property (readonly, nonatomic) int uniform_outRangeTextureUnit;
@property (readonly, nonatomic) int uniform_renderInfo;
@property (readonly, nonatomic) int uniform_displayRange;
@property (readonly, nonatomic) int uniform_outRangeColor;
@property (readonly, nonatomic) int attrPositionInfo;
@property (readonly, nonatomic) int attrTextureInfo;
@property (readonly, nonatomic) int attrIndexInfo;
@property (readonly, nonatomic) int attrColorInfo;

+ (id)makeColorPolygonShader;
+ (id)makeTexturePolygonShader;
+ (id)makeTextureLineShader;
+ (id)makeGradientColorLineShader;

- (void).cxx_destruct;
- (BOOL)clear;
- (id)init;
- (BOOL)setup;

@end
