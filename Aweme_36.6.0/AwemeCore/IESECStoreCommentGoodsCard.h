@class IESECGoodsPriceLabel, UIImageView, IESECCommentGoodsInfoModel, UILabel;

@interface IESECStoreCommentGoodsCard : UIView

@property (retain, nonatomic) IESECCommentGoodsInfoModel *data;
@property (retain, nonatomic) UIImageView *mainPic;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *praiseRate;
@property (retain, nonatomic) UILabel *stateLabel;

+ (double)cardHeightWithDetail:(id)a0;

- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)init;
- (void)setupUI;

@end
