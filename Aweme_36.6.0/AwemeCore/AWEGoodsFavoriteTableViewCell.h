@class UIImageView, UILabel, IESECGoodsPriceLabel;

@interface AWEGoodsFavoriteTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) UILabel *oringinalPriceLabel;

+ (id)convertFenToYuan:(id)a0;
+ (id)makeAttributedStringWithGoodsPrice:(id)a0;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithModel:(id)a0;

@end
