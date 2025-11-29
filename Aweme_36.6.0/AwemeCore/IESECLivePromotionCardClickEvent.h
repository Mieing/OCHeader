@class NSDictionary, IESECBTMModel, IESECLiveGoodsViewModel;

@interface IESECLivePromotionCardClickEvent : NSObject

@property (nonatomic) long long areaType;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
