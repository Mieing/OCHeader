@class IESECShopGoodsSortModel, NSMutableArray, IESECShopGoodsPickTypeModel;

@interface IESECShopBaseFilterDiffableModel : NSObject <IGListDiffable>

@property (nonatomic) BOOL disableUserInteraction;
@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (retain, nonatomic) IESECShopGoodsSortModel *selectedSortType;
@property (retain, nonatomic) NSMutableArray *pickTypes;
@property (retain, nonatomic) IESECShopGoodsPickTypeModel *selectedPickType;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
