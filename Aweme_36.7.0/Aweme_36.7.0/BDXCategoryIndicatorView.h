@class NSArray, UIColor, UIView;

@interface BDXCategoryIndicatorView : BDXCategoryBaseView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSArray *indicators;
@property (nonatomic, getter=isCellBackgroundColorGradientEnabled) BOOL cellBackgroundColorGradientEnabled;
@property (retain, nonatomic) UIColor *cellBackgroundUnselectedColor;
@property (retain, nonatomic) UIColor *cellBackgroundSelectedColor;
@property (nonatomic, getter=isSeparatorLineShowEnabled) BOOL separatorLineShowEnabled;
@property (retain, nonatomic) UIColor *separatorLineColor;
@property (nonatomic) struct CGSize { double width; double height; } separatorLineSize;

- (void)initializeData;
- (BOOL)selectCellAtIndex:(long long)a0 selectedType:(unsigned long long)a1;
- (void)contentOffsetOfContentScrollViewDidChanged:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshSelectedCellModel:(id)a0 unselectedCellModel:(id)a1;
- (void)refreshLeftCellModel:(id)a0 rightCellModel:(id)a1 ratio:(double)a2;
- (void)resetLineView;
- (void).cxx_destruct;
- (void)refreshState;
- (void)initializeViews;

@end
