@class NSDictionary, IESECLiveGoodsListItemViewModel, IESECBTMModel, IESECLiveGoodsListViewCellV2;

@interface IESECLiveGoodsListViewCellClickEvent : NSObject

@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *item;
@property (nonatomic) long long clickAreaType;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) IESECLiveGoodsListViewCellV2 *sourceCell;
@property (retain, nonatomic) IESECBTMModel *btmModel;

- (void).cxx_destruct;

@end
