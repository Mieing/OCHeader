@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListAudioVideoCombineEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (nonatomic) BOOL canShowInPlusPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_onItemDidSelectedWithEnterFrom:(long long)a0;
- (void).cxx_destruct;

@end
