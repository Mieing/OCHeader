@class UIColor;

@interface AFDBubbleShadow : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGSize { double width; double height; } offset;

- (void).cxx_destruct;
- (id)init;

@end
