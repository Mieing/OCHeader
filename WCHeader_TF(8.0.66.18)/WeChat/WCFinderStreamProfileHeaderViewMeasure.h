@class UIColor;

@interface WCFinderStreamProfileHeaderViewMeasure : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } infoEdgeInsets;
@property (nonatomic) double elementPadding;
@property (nonatomic) double cornerMaskRadius;
@property (retain, nonatomic) UIColor *followBtnThemeColor;

- (id)init;
- (void).cxx_destruct;

@end
