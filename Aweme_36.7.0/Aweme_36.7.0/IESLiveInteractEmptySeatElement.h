@class IESLiveInteractDynamicEmptyElementInfoModel;

@interface IESLiveInteractEmptySeatElement : IESLiveInteractSeatElementBase

@property (retain, nonatomic) IESLiveInteractDynamicEmptyElementInfoModel *dynamicValue;

- (void)dynamicUpdateItemInfo:(id)a0;
- (id)dynamicItemId;
- (void)dynamicResetItem;
- (void).cxx_destruct;

@end
