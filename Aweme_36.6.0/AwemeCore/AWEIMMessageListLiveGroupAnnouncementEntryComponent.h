@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListLiveGroupAnnouncementEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListLiveGroupAnnouncementEntryInterface>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)didClickLiveGroupAnnouncement;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)didClickLiveGroupAnnouncementWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
