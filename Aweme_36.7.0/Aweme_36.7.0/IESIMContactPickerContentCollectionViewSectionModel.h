@class NSArray, NSString, NSDictionary;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerSectionDecorationModelProtocol;

@interface IESIMContactPickerContentCollectionViewSectionModel : NSObject <IESIMContactPickerContentSectionModelProtocol>

@property (copy, nonatomic) NSArray *cellModels;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long index;
@property (copy, nonatomic) NSDictionary *supplementaryModelMapper;
@property (retain, nonatomic) id<IESIMContactPickerSectionDecorationModelProtocol> decorationModel;
@property (weak, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enableSelectAll;
@property (nonatomic) BOOL notInvolvedInEmptyStateCheck;
@property (nonatomic) BOOL isPlaceholderSection;
@property (nonatomic) BOOL needHiddenWhenSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCellModels:(id)a0;
- (id)initWithIdentifier:(id)a0 index:(unsigned long long)a1 cellModels:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
