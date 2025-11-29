@class NSString, NSMutableAttributedString;
@protocol IESIMContactPickerLayoutProtocol;

@interface IESIMContactPickerNormalSectionBuilder : NSObject <IESIMContactPickerContentSectionBuilder>

@property (copy, nonatomic) NSString *sectionBuilderIdentifier;
@property (nonatomic) long long buildType;
@property (nonatomic) unsigned long long sectionReferenceIndex;
@property (nonatomic) BOOL notInvolvedInEmptyStateCheck;
@property (retain, nonatomic) NSMutableAttributedString *defaultSectionTitle;
@property (copy, nonatomic) NSString *contentSectionInsetsString;
@property (nonatomic) BOOL forceSectionInsets;
@property (nonatomic) double sectionTopInset;
@property (copy, nonatomic) id /* block */ injectParamBlock;
@property (copy, nonatomic) id /* block */ sectionModelConfiguration;
@property (copy, nonatomic) id /* block */ customCellSizeAction;
@property (copy, nonatomic) id /* block */ customCellRegister;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSectionViewModelsWithCellViewModels:(id)a0;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 insetForSectionModel:(id)a1;
- (double)collectionView:(id)a0 minimumLineSpacingForSectionModel:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSectionModel:(id)a1;
- (id)initWithIdentifier:(id)a0 buildType:(long long)a1 sectionReferenceIndex:(unsigned long long)a2;
- (void)updateContentSectionInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewContentInsets;

@end
