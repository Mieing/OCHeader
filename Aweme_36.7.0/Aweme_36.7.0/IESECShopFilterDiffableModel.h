@class IESECShopGoodsTypeModel, NSMutableArray, NSArray;

@interface IESECShopFilterDiffableModel : IESECShopBaseFilterDiffableModel

@property (retain, nonatomic) NSMutableArray *goodsTypes;
@property (retain, nonatomic) IESECShopGoodsTypeModel *selectedGoodsType;
@property (readonly, nonatomic) NSArray *goodsTypeNames;

- (void).cxx_destruct;

@end
