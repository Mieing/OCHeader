@class UIColor;

@interface BDXCategoryIndicatorCellModel : BDXCategoryBaseCellModel

@property (nonatomic, getter=isSepratorLineShowEnabled) BOOL sepratorLineShowEnabled;
@property (retain, nonatomic) UIColor *separatorLineColor;
@property (nonatomic) struct CGSize { double width; double height; } separatorLineSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundViewMaskFrame;
@property (nonatomic, getter=isCellBackgroundColorGradientEnabled) BOOL cellBackgroundColorGradientEnabled;
@property (retain, nonatomic) UIColor *cellBackgroundSelectedColor;
@property (retain, nonatomic) UIColor *cellBackgroundUnselectedColor;

- (void).cxx_destruct;

@end
