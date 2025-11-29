@class UIColor, CAShapeLayer;

@interface ZZCornerModel : NSObject

@property (nonatomic) long long position;
@property (nonatomic) double radius;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double borderWidth;
@property (readonly, nonatomic) CAShapeLayer *layer;

- (void).cxx_destruct;

@end
