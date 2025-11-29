@class IESECRelationGoodsPickTypeModel, NSMutableArray, IESECRelationGoodsSortModel;

@interface IESECWinBaseFilterDiffableModel : NSObject <IGListDiffable>

@property (nonatomic) BOOL disableUserInteraction;
@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (retain, nonatomic) IESECRelationGoodsSortModel *selectedSortType;
@property (retain, nonatomic) NSMutableArray *pickTypes;
@property (retain, nonatomic) IESECRelationGoodsPickTypeModel *selectedPickType;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
