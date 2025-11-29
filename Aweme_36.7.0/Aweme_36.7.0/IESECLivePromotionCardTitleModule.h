@class IESECLiveGoodsTitleLabel;

@interface IESECLivePromotionCardTitleModule : IESECLivePromotionCardCommonModule

@property (retain, nonatomic) IESECLiveGoodsTitleLabel *titleLabel;

- (id)createTitleLabelByUIConfig;
- (void)updateWithGoodsViewModel:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)setupAccessibility;
- (id)createTitleLabel;

@end
