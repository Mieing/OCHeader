@interface NLETextTemplateBoundingBox : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;

- (id)boundingBox;
- (id)initWithBoundingBox:(id)a0;

@end
