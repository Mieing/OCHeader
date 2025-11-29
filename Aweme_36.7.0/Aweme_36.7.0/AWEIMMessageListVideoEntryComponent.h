@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListVideoEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListVideoEntryInterface>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL canShowInPlusPanel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_onItemDidSelectedWithEnterFrom:(long long)a0 conversationType:(unsigned long long)a1;
- (void)p_startVideoVoipEnterFrom:(long long)a0 extraResource:(id)a1;
- (void).cxx_destruct;

@end
