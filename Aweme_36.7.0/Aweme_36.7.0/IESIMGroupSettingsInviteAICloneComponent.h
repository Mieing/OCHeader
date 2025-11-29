@class NSString, IESIMChatSettingsItemInfoViewModel;

@interface IESIMGroupSettingsInviteAICloneComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider>

@property (retain, nonatomic) IESIMChatSettingsItemInfoViewModel *viewModel;
@property (nonatomic) BOOL didTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)p_trackShow;
- (void)p_transferToManageAIClone;
- (void)p_trackWithEventName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)p_currentRole;

@end
