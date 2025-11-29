@class NSString, NSArray;
@protocol IESIMContactPickerLayoutProtocol;

@interface IESIMRecentShareHorizontalSectionBuilder : NSObject <IESIMContactPickerContentSectionBuilder>

@property (copy, nonatomic) NSString *sectionBuilderIdentifier;
@property (copy, nonatomic) NSArray *sectionModels;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (void).cxx_destruct;

@end
