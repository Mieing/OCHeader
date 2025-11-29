@class CAGradientLayer, UIImageView, AWEDoubleColumnSearchMerchandiseModel, UILabel, DUXButton;

@interface AWEEcommerceSearchEmptyCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIImageView *emptyImage;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) DUXButton *button;
@property (nonatomic) BOOL isFromECommerce;
@property (weak, nonatomic) id delegate;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (BOOL)shouldHideButton;
- (void)addGradientBgColor;
- (void)didClickButtonAction;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
