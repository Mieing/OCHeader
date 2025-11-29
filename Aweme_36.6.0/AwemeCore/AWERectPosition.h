@interface AWERectPosition : AWEBaseApiModel

@property (nonatomic) double top;
@property (nonatomic) double left;
@property (nonatomic) double bottom;
@property (nonatomic) double right;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;

+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithSize:(struct CGSize { double x0; double x1; })a0;

@end
