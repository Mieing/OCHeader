@class NSString;
@protocol IESIMContactPickerLayoutProtocol;

@interface IESIMContactPickerParticipantSectionBuilder : IESIMContactPickerNormalSectionBuilder <IESIMContactPickerContentSectionBuilder>

@property (readonly, copy, nonatomic) NSString *sectionBuilderIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (id)attrWithTitle:(id)a0;

@end
