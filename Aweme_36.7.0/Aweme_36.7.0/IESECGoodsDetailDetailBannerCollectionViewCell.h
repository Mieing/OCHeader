@class UIImageView, UILabel, IESECTextWithIconElement;

@interface IESECGoodsDetailDetailBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) IESECTextWithIconElement *model;

- (void)clickBannerToNextPage:(id)a0;
- (void)configCellWithTextIconElementModel:(id)a0 needWholeWidth:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
