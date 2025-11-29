@interface IESGLBaseTextureInfo : NSObject

@property (nonatomic) unsigned int texId;
@property (nonatomic) const float *texCoords;
@property (nonatomic) struct CGSize { double width; double height; } texSize;
@property (nonatomic) void *rlInfo;

+ (id)infoWithTexId:(unsigned int)a0 texCoords:(const float *)a1 texSize:(struct CGSize { double x0; double x1; })a2 rlInfo:(void *)a3;
+ (id)infoWithTexId:(unsigned int)a0 texCoords:(const float *)a1 texSize:(struct CGSize { double x0; double x1; })a2;

@end
