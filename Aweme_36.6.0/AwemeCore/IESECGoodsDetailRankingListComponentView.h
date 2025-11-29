@class IESECGoodsDetailModel, UILabel, UIImageView;

@interface IESECGoodsDetailRankingListComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsDetailModel *goodsModel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIImageView *rankBrandImageView;
@property (retain, nonatomic) UIImageView *rankingIconImageView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UILabel *topLabel;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openRankList;
- (void)updateUIWithRankModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
