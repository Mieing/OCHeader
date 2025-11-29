@class NSNumber, UIColor, CAGradientLayer;

@interface CMTableViewAttributes : NSObject

@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL shouldAddGradientLayerIfScrollable;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellContentInset;
@property (nonatomic) double cellMinWidth;
@property (nonatomic) double cellMaxWidth;
@property (nonatomic) double cellMaxHeight;
@property (retain, nonatomic) UIColor *cellBgColor;

- (id)gradientLayerLeftToRight:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
