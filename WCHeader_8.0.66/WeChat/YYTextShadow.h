@class UIColor;

@interface YYTextShadow : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double radius;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) YYTextShadow *subShadow;

+ (id)shadowWithColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1 radius:(double)a2;
+ (id)shadowWithNSShadow:(id)a0;

- (id)nsShadow;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
