@class UIView, MMFinderLivePrizeConfigItem, MMFinderLiveCreateLotteryFooterView, UIImageView, CAGradientLayer, MMArrayConverter, MMUILabel, MMLiveLotteryGiftPacketsView, MMFinderLiveCreateLotteryHeaderView;

@interface MMFinderLiveCreateLotteryCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) UIView *custemContentView;
@property (retain, nonatomic) MMFinderLiveCreateLotteryHeaderView *headerView;
@property (retain, nonatomic) MMFinderLiveCreateLotteryFooterView *footerView;
@property (retain, nonatomic) MMArrayConverter *linesConverter;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) MMLiveLotteryGiftPacketsView *lotteryGiftPacketsView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMFinderLivePrizeConfigItem *configItem;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ hoverBlock;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updatePrizeConfigItem:(id)a0;
- (void)updateData;
- (void)updateGoodImageViewWithImgUrl:(id)a0;
- (void)createUI;
- (void)layoutUI;
- (void)layoutLotteryPrizeTypeWithCustomUI;
- (void)layoutLotteryPrizeTypeWithGiftUI;
- (void)layoutLotteryPrizeTypeWithShopProductUI;
- (void)layoutLotteryPrizeTypeWithGameTeamUpUI;
- (void)layoutGiftPrizeTypeUI;
- (void)layoutBigImageUI;
- (void)updateGradientLayer:(BOOL)a0;
- (id)addLine;
- (void)actionButtonClick;
- (id)getGradientLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
