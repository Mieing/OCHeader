@class NSString, IESIMChatSettingsItemInfoViewModel;

@interface IESIMSingleSettingsDeleteAllMessageComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider>

@property (retain, nonatomic) IESIMChatSettingsItemInfoViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)p_onClicked;
- (void).cxx_destruct;

@end
