@class NSString, UIView;
@protocol IESIMContactPickerContentDataProviderDelegate, AWEIMShareContactListProtocol, IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentCellModelProtocol;

@interface AWEIMShareMorePanelHorizontalComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent, AWEIMShareContactListDelegate, IESIMContactPickerSelectAction>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> contactList;
@property (retain, nonatomic) id<IESIMContactPickerContentCellModelProtocol> sectionModel;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (id)trackCommonParamsWithShareContactList:(id)a0;
- (id)getCellViewModels;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)selectionContext;

@end
