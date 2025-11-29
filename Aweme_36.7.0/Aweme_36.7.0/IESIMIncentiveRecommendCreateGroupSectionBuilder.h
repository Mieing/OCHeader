@interface IESIMIncentiveRecommendCreateGroupSectionBuilder : IESIMContactPickerNormalSectionBuilder

@property (nonatomic) long long requiredSelectCount;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 insetForSectionModel:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewContentInsets;

@end
