@class IESIMContactPickerComponentContext, NSArray;

@interface AWEIMMyGroupSectionBuilder : IESIMContactPickerNormalSectionBuilder

@property (weak, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (copy, nonatomic) NSArray *sectionModels;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (void)p_refreshSelectStatusWithCellModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
