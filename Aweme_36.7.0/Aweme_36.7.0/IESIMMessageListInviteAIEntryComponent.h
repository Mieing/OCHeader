@class NSString, AWEIMChatPanelModel;

@interface IESIMMessageListInviteAIEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *panelModel;
@property (nonatomic) BOOL didShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void)p_didClick;
- (void)p_trackWithEventName:(id)a0;
- (void)p_trackShowIfNeeded;
- (void).cxx_destruct;

@end
