@class UILabel, UIImageView;

@interface IESECStoreSearchHotCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;

- (void)makeUpIconImageViewWithWidth:(double)a0 andHeight:(double)a1;
- (void)setTitle:(id)a0 wordsIcon:(id)a1;
- (void)setTitle:(id)a0 iconImage:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
