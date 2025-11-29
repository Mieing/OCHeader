@class IESECMatchPurchaseModel, IESECMatchPurchaseGoodsBuyView, IESECGradientView, UILabel, NSMutableArray, IESECUIImageView;
@protocol IESECMatchPurchaseFullTableCellProtocol;

@interface IESECMatchPurchaseFullScreenCell : UITableViewCell

@property (retain, nonatomic) IESECUIImageView *goodsImageView;
@property (retain, nonatomic) IESECUIImageView *bgImageView;
@property (retain, nonatomic) IESECGradientView *goodImageMaskView;
@property (retain, nonatomic) NSMutableArray *anchorViews;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (retain, nonatomic) UILabel *matchPurchaseContentLabel;
@property (nonatomic) double imgHeight;
@property (retain, nonatomic) IESECMatchPurchaseModel *model;
@property (readonly, nonatomic) IESECMatchPurchaseGoodsBuyView *goodsBuyView;
@property (weak, nonatomic) id<IESECMatchPurchaseFullTableCellProtocol> delegate;

- (void)setupAnchors;
- (void)clickToGoodsDetail:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
