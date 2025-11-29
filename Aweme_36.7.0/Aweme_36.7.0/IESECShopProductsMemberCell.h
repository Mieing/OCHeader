@class UIStackView, UIImageView, IESECShopProductsMemberCellText, UIView, IESECShopProductsMemberCellButton;

@interface IESECShopProductsMemberCell : UICollectionViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIStackView *headerContainer;
@property (retain, nonatomic) IESECShopProductsMemberCellText *title;
@property (retain, nonatomic) IESECShopProductsMemberCellText *subTitle;
@property (retain, nonatomic) IESECShopProductsMemberCellButton *button;

- (void)updateWithModel:(id)a0 forType:(unsigned long long)a1;
- (void)updateSingleWithModel:(id)a0;
- (void)updateDoubleWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;

@end
