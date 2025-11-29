@class UIColor, BDRBorderStyle;

@interface BDRTextBlock : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) BDRBorderStyle *topBorderStyle;
@property (retain, nonatomic) BDRBorderStyle *leftBorderStyle;
@property (retain, nonatomic) BDRBorderStyle *bottomBorderStyle;
@property (retain, nonatomic) BDRBorderStyle *rightBorderStyle;
@property (nonatomic) double topLeftRadius;
@property (nonatomic) double topRightRadius;
@property (nonatomic) double bottomRightRadius;
@property (nonatomic) double bottomLeftRadius;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCornerRadius;

@end
