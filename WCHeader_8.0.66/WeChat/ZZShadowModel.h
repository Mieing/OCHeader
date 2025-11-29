@class UIColor;

@interface ZZShadowModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;

+ (id)create;

- (void).cxx_destruct;

@end
