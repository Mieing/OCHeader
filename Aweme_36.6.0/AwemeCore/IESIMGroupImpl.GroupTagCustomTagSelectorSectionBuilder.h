@class NSString;
@protocol IESIMContactPickerLayoutProtocol;

@interface IESIMGroupImpl.GroupTagCustomTagSelectorSectionBuilder : NSObject <IESIMContactPickerContentSectionBuilder>

@property (nonatomic, readonly) NSString *sectionBuilderIdentifier;
@property (nonatomic, retain) id<IESIMContactPickerLayoutProtocol> layout;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (double)collectionView:(id)a0 minimumLineSpacingForSectionModel:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
