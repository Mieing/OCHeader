@interface ACCTextTemplateBoundingBox : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } normalizSize;

- (id)initWithBoundingBox:(id)a0;

@end
