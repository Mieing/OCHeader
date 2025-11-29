@interface NLETextTemplateBoundingBoxWithTransform : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;

+ (struct CGPoint { double x0; double x1; })transformPosition:(struct CGPoint { double x0; double x1; })a0 playerSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0 playerSize:(struct CGSize { double x0; double x1; })a1;

- (id)boundingBox;
- (id)initWithBoundingBox:(id)a0;

@end
