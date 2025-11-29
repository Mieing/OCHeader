@class UIColor;

@interface IESIMTextShadow : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double radius;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) IESIMTextShadow *subShadow;

+ (id)shadowWithColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1 radius:(double)a2;
+ (id)shadowWithNSShadow:(id)a0;

- (id)nsShadow;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
