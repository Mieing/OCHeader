@class UIColor, IESIMTextShadow;

@interface IESIMTextBorder : NSObject <NSCopying>

@property (nonatomic) long long lineStyle;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) int lineJoin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) IESIMTextShadow *shadow;
@property (retain, nonatomic) UIColor *fillColor;

+ (id)borderWithLineStyle:(long long)a0 lineWidth:(double)a1 strokeColor:(id)a2;
+ (id)borderWithFillColor:(id)a0 cornerRadius:(double)a1;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
