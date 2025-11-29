@class NSString, NSArray;

@interface VEMaterial : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int texId;
@property (readonly, nonatomic) struct CGSize { double width; double height; } texSize;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSArray *geometries;
@property (nonatomic) void *rlInfo;
@property (nonatomic) long long expectTargetType;
@property (nonatomic) BOOL isPassThrough;

- (id)initTexId:(unsigned int)a0 name:(id)a1 texSize:(struct CGSize { double x0; double x1; })a2;
- (id)initPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
