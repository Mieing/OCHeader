@interface DVETransformEditItem : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } translation;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })convertCGAffineTransform;
- (id)init;

@end
