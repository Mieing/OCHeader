@class NSString, AWEIMChatPanelModel;
@protocol AWEIMFansGroupCommodityEntryInteractorInterface, AWEIMMessageListPlusPanelInterface;

@interface AWEIMMessageListShareCommodityEntryComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageListPlusPanelRegistry, AWEIMMessageListShareCommodityEntryInterface>

@property (nonatomic) long long entryState;
@property (nonatomic) BOOL shouldShowShopwindow;
@property (nonatomic) BOOL isFetchingData;
@property (copy, nonatomic) NSString *unavailableToast;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelCommodityItem;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelShopWindowItem;
@property (weak, nonatomic) id<AWEIMFansGroupCommodityEntryInteractorInterface> commodityInteractor;
@property (weak, nonatomic) id<AWEIMMessageListPlusPanelInterface> messageListPlusPanelService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)p_onItemDidSelectedFromChatPanel;
- (BOOL)canShowCommodityEntryForFansGroupInActionBar;
- (BOOL)canShowShopwindowEntryForFansGroupInActionBar;
- (void)didClickEntry;
- (void)p_fetchServerState;
- (long long)p_sendStatusToEntryState:(long long)a0;
- (BOOL)p_enableFansCommodityWithCon:(id)a0;
- (void)p_tryOpenCommoditySchema;
- (void)p_tackChatProductClickEvent;
- (void)p_insertOrUpdateCommodityEntry;
- (void).cxx_destruct;

@end
