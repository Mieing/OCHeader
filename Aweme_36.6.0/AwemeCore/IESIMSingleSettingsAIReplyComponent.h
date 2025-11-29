@class NSString, IESIMChatSettingsItemSwitchViewModel;

@interface IESIMSingleSettingsAIReplyComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider>

@property (retain, nonatomic) IESIMChatSettingsItemSwitchViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
