@class UIImageView, UILabel, IESECInsetsLabel;

@interface IESECGoodsActivityAuctionHistoryCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *userName;
@property (retain, nonatomic) IESECInsetsLabel *statusLabel;
@property (retain, nonatomic) UILabel *recordTimeLabel;
@property (retain, nonatomic) UILabel *priceLabel;

- (id)generatePriceText:(id)a0;
- (void)configWithAuctionHistory:(id)a0 leading:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
