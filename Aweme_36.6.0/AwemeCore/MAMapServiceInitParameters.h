@class EAGLContext, CAMetalLayer, NSNumber;

@interface MAMapServiceInitParameters : NSObject

@property (weak, nonatomic) CAMetalLayer *metalLayer;
@property (retain, nonatomic) EAGLContext *glContext;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (retain, nonatomic) NSNumber *buildingHeight;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL terrainEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
