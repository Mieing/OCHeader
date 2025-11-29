@class NSArray;

@interface AWEProfileNavigationContainerView : UIView

@property (copy, nonatomic) NSArray *leftDataSource;
@property (copy, nonatomic) NSArray *rightDataSource;

- (id)allDataSource;
- (void)onNavigationStickToTop:(BOOL)a0;
- (id)currentLeftShowTypes;
- (void)updateWithAlpha:(double)a0 force:(BOOL)a1;
- (id)currentLeftShowViews;
- (id)currentRightShowViews;
- (void)refreshWithLeftDataSource:(id)a0;
- (void)refreshWithRightDataSource:(id)a0;
- (void)refreshWithLeftDataSource:(id)a0 rightDataSource:(id)a1;
- (id)currentRightShowTypes;
- (void)disableClickWhenAlphaLessThan:(double)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
