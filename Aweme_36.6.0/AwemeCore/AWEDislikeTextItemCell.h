@class UILabel;

@interface AWEDislikeTextItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;

- (void)selectedStyle;
- (void)deselectedStyle;
- (void)updateWithTitle:(id)a0 subTitle:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
