@class NSDictionary, IESECLiveGoodsListItemViewModel, IESECBTMModel;

@interface IESECLiveGoodsListViewClickEvent : NSObject

@property (nonatomic) long long areaType;
@property (nonatomic) long long commodityClickAreaType;
@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *item;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECBTMModel *btmModel;

- (void).cxx_destruct;

@end
