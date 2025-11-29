@class NSString, BDXLynxTabBarPro;

@interface BDXTabBarCategoryView : BDXCategoryIndicatorView <BDXTabbarItemProViewDelegate>

@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadii;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRect;
@property (weak, nonatomic) BDXLynxTabBarPro *lynxTabbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (BOOL)selectCellAtIndex:(long long)a0 selectedType:(unsigned long long)a1;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:(long long)a0;
- (void)widthDidChanged:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
