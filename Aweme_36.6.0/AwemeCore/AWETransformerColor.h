@class UIColor, NSArray;

@interface AWETransformerColor : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL isGradientColor;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;

- (void).cxx_destruct;

@end
