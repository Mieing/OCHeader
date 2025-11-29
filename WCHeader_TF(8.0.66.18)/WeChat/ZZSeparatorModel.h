@class UIColor, CAShapeLayer;

@interface ZZSeparatorModel : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long position;
@property (nonatomic) double borderWidth;
@property (nonatomic) double offset;
@property (nonatomic) double begin;
@property (nonatomic) double end;
@property (nonatomic) double length;
@property (readonly, nonatomic) CAShapeLayer *layer;

- (id)init;
- (void).cxx_destruct;

@end
