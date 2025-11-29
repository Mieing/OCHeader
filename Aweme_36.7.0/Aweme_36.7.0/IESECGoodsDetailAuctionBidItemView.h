@class UIImageView, UILabel, IESECGoodsPriceLabel;

@interface IESECGoodsDetailAuctionBidItemView : UIView

@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *userName;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UILabel *recordTimeLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (void)configWithAuctionHistory:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
