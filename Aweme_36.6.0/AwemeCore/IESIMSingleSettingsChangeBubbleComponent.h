@class NSString, IESIMChatSettingsItemInfoViewModel;

@interface IESIMSingleSettingsChangeBubbleComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider>

@property (retain, nonatomic) IESIMChatSettingsItemInfoViewModel *viewModel;
@property (nonatomic) BOOL hasTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)p_trackBubbleSettingWithEvent:(id)a0;
- (void)p_transferToNewBubbleSettingPage;
- (void)p_transferToChangeBubble;
- (void).cxx_destruct;

@end
