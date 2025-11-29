@class IESECShopRecommendMallObject, UIImageView, UILabel, UIView, IESECButton;

@interface IESECShopRecommendMallCell : UICollectionViewCell {
    IESECShopRecommendMallObject *_model;
}

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIImageView *titleBgImageView;
@property (retain, nonatomic) UILabel *recommendTitleLabel;
@property (retain, nonatomic) UILabel *recommendSubTitleLabel;
@property (retain, nonatomic) UIView *goodsBottomView;
@property (retain, nonatomic) IESECButton *goMallBtn;
@property (copy, nonatomic) id /* block */ clickProduct;
@property (copy, nonatomic) id /* block */ showProduct;
@property (nonatomic) BOOL ignorePadding;

- (void)bindWithModel:(id)a0;
- (void)clickProduct:(id)a0;
- (void)clickGoMall;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
