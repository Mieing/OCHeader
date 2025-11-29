@class NSDictionary, IESECLiveGoodsListItemViewModel, IESECLiveGoodsListViewCellV2;

@interface IESECLiveGoodsListViewCellShowEvent : NSObject

@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *item;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) IESECLiveGoodsListViewCellV2 *sourceCell;

- (void).cxx_destruct;

@end
