@class UIImageView, UILabel;

@interface AWEMateListCommonSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long type;

- (void)p_setupViews;
- (void)updateWithSectionType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTitle:(id)a0;

@end
