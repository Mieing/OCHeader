@class NSString, AWEIMChatPanelModel;

@interface AWEIMCouponPlusPanelEntryComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMCouponPlusPanelEntryInterface, AWEIMMessageListPlusPanelRegistry>

@property (nonatomic) long long entryState;
@property (nonatomic) BOOL isFetchingData;
@property (copy, nonatomic) NSString *unavailableToast;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)p_onItemDidSelectedFromChatPanel;
- (BOOL)canShowCouponEntryInActionBar;
- (void)updateLocalFansCouponStatus;
- (void)onTapEntry;
- (BOOL)p_canShowInputPanelEntryWithCon:(id)a0;
- (void)p_fetchServerState;
- (void)p_tryOpenCouponPage;
- (BOOL)p_enableFansCouponWithCon:(id)a0;
- (long long)p_sendStatusToEntryState:(long long)a0;
- (void)p_sendCouponMessageFailed;
- (void)p_insertOrUpdateCouponEntry;
- (void).cxx_destruct;

@end
