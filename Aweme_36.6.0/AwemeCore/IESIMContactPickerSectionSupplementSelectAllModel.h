@class NSString, IESIMContactPickerContentCollectionViewSectionModel, UIColor;
@protocol IESIMContactPickerSectionSupplementModelContext;

@interface IESIMContactPickerSectionSupplementSelectAllModel : IESIMContactPickerSectionSupplementModel <IESIMContactPickerContentSupplementaryModelProtocol>

@property (weak, nonatomic) IESIMContactPickerContentCollectionViewSectionModel *sectionModel;
@property (copy, nonatomic) id /* block */ onTap;
@property (readonly, copy, nonatomic) NSString *elementKind;
@property (readonly, copy, nonatomic) NSString *reusableViewIdentifier;
@property (readonly, nonatomic) id<IESIMContactPickerSectionSupplementModelContext> context;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
