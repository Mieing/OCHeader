@class IESIMContactPickerComponentContext, NSArray, IESIMContactPickerContext;

@interface IESIMShareRecentShareVerticalSectionBuilder : IESIMContactPickerNormalSectionBuilder

@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) IESIMContactPickerContext *listContext;
@property (weak, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (copy, nonatomic) NSArray *sectionModels;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (void)p_refreshSelectStatusWithCellModels:(id)a0;
- (id)p_enterMethodForEventCreateGroup;
- (id)p_enterFormForEventCreateGroup;
- (id)initWithDataType:(unsigned long long)a0 context:(id)a1;
- (void)setupSectionHeaderWithSection:(id)a0;
- (BOOL)needShowGroupEntryWithCurrentModel:(id)a0;
- (void)p_transferToCreateGroupWithHeaderModel:(id)a0;
- (void).cxx_destruct;

@end
