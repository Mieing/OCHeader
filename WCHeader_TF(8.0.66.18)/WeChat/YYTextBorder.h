@class UIColor, YYTextShadow;

@interface YYTextBorder : NSObject <NSCoding, NSCopying>

@property (nonatomic) long long lineStyle;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) int lineJoin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) YYTextShadow *shadow;
@property (retain, nonatomic) UIColor *fillColor;

+ (id)borderWithLineStyle:(long long)a0 lineWidth:(double)a1 strokeColor:(id)a2;
+ (id)borderWithFillColor:(id)a0 cornerRadius:(double)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
