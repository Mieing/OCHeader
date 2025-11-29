@class UILabel, IESECUIImageView, UIView;

@interface IESECGoodsSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) IESECUIImageView *arrowImage;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)clickHeader;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
