@class UIColor, AWEGradientView, UIView;

@interface AWEFeedDoubleColumnFlexPinchSkeletonView : UIView

@property (retain, nonatomic) UIColor *topBarGradientViewColor;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topBarSkeletonView;
@property (retain, nonatomic) UIView *doubleColumnSkeletonView;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (id)createGradientView;
- (id)createTopBarSkeletonView;
- (void)addRoundingCornerWithView:(id)a0 byRoundingCorners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTopBarGradientViewColor:(id)a0;
- (id)createDoubleColumnSkeletonView;
- (id)createSearchBarTopBarSkeletonView;
- (id)createSkeletonViewWithColor:(id)a0 cornerRadius:(double)a1;
- (id)createDoubleColumnCellSkeletonView;
- (void).cxx_destruct;
- (void)setupUI;

@end
