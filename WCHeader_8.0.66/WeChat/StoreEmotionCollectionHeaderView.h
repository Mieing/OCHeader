@class UILabel, UIView;

@interface StoreEmotionCollectionHeaderView : UICollectionReusableView {
    UIView *_bottomLine;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showBottomLine;
- (void)hideBottomLine;
- (void)setTitleLabelX:(double)a0;
- (void)setLineViewColor:(id)a0;
- (void)setupViews;
- (void)setHeaderViewTitle:(id)a0;
- (void)setHeaderFont:(id)a0;
- (void)setHeaderX:(double)a0;
- (void)setHeaderColor:(id)a0;
- (void).cxx_destruct;

@end
