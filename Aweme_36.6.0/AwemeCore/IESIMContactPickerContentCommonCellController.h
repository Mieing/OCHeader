@class NSMutableDictionary, IESIMContactPickerCellCheckBoxModel, AWEIMGroupParticipantBizInfoPeerViewModel, NSArray, NSString, IESIMContactPickerCellButtonModel;
@protocol IESIMGroupParticipantTagContainerModelProtocol;

@interface IESIMContactPickerContentCommonCellController : IESIMContactPickerContentCellModel

@property (retain, nonatomic) NSMutableDictionary *insertBeforeComponentMap;
@property (retain, nonatomic) NSMutableDictionary *insertAfterComponentMap;
@property (copy, nonatomic) id /* block */ canCreateComponent;
@property (retain, nonatomic) IESIMContactPickerCellButtonModel *buttonConfig;
@property (retain, nonatomic) IESIMContactPickerCellCheckBoxModel *checkboxConfig;
@property (retain, nonatomic) AWEIMGroupParticipantBizInfoPeerViewModel *peerVM;
@property (retain, nonatomic) id<IESIMGroupParticipantTagContainerModelProtocol> participantTagModel;
@property (nonatomic) unsigned long long streakScene;
@property (copy, nonatomic) NSArray *secondLineTags;
@property (retain, nonatomic) NSString *supplementDesc;
@property (nonatomic) BOOL forbidShowOnline;

+ (id)instanceSelectionModelWithShareModel:(id)a0 style:(unsigned long long)a1;
+ (id)instanceSelectionModelWithShareModel:(id)a0 style:(unsigned long long)a1 cellReuseIdentifier:(id)a2;
+ (id)instanceSelectionMode:(id)a0 cellReuseIdentifier:(id)a1 cell:(unsigned long long)a2;

- (double)heightForCell;
- (void)insertComponents:(id)a0 afterIdentifier:(id)a1;
- (void)willDisplayAtIndexPath:(id)a0;
- (void)createComponents;
- (void)didEndDisplay;
- (id)leftComponentNamesWithStyle:(unsigned long long)a0;
- (id)insertComponentsIfNeedForComponents:(id)a0;
- (id)createComponents:(id)a0;
- (id)rightComponentNamesWithStyle:(unsigned long long)a0;
- (id)firstLineComponentNames;
- (id)secondLineComponentNames;
- (id)thirdLineComponentNames;
- (id)identifierForClass:(Class)a0;
- (id)resolveInsertAfterComponentsWithMap:(id)a0 sourceComponents:(id)a1;
- (id)resolveInsertBeforeComponentsWithMap:(id)a0 sourceComponents:(id)a1;
- (BOOL)canCreateComponentByClass:(Class)a0;
- (double)maxHeight:(id)a0;
- (void)insertComponents:(id)a0 beforeIdentifier:(id)a1;
- (id)allComponents;
- (void).cxx_destruct;

@end
