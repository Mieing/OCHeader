@class IESECLiveGoodsListUIConfigStore, IESECLiveIntroducingCardUIConfigStore, IESECLivePromotionCardUIConfigStore;

@interface IESECLiveUIConfigStore : NSObject

@property (retain, nonatomic) IESECLivePromotionCardUIConfigStore *promotionCard;
@property (retain, nonatomic) IESECLiveGoodsListUIConfigStore *goodsList;
@property (retain, nonatomic) IESECLiveIntroducingCardUIConfigStore *introducingCard;

- (void).cxx_destruct;

@end
