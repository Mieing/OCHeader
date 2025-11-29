@class UIView;

@interface WCFinderCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UIView *wc_contentView;
@property (nonatomic) double contentWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)addSubviewToReusableView:(id)a0;
- (void)layoutSubviews;
- (void)reLayoutContentView;
- (void).cxx_destruct;

@end
