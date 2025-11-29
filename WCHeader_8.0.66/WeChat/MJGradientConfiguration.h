@class NSArray;

@interface MJGradientConfiguration : NSObject

@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;

+ (id)horizontalGradientWithColors:(id)a0;
+ (id)verticalGradientWithColors:(id)a0;

- (id)init;
- (id)initWithColors:(id)a0 locations:(id)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;
- (void).cxx_destruct;

@end
