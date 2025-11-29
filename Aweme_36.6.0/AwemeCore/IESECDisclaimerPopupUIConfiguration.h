@class UIColor, UIFont, UIImage;

@interface IESECDisclaimerPopupUIConfiguration : NSObject

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleTopMargin;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (retain, nonatomic) UIColor *contentLinkTextColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } confirmButtonEdges;
@property (nonatomic) double confirmButtonCornerRadius;
@property (retain, nonatomic) UIColor *confirmButtonTextColor;
@property (retain, nonatomic) UIColor *confirmButtonBackgroudColor;
@property (nonatomic) double containerCornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } closeButtonTopRightOffset;
@property (nonatomic) BOOL useCloseOnBottomStyle;
@property (retain, nonatomic) UIImage *closeButtonImage;

- (void)setupDefaultsValue;
- (id)getValueWithArray:(id)a0 withIndex:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
