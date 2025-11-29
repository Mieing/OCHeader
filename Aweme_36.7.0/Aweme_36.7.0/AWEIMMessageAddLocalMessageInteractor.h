@class NSNumber, AWELocoalGifMessageController, NSString, AWELocalGreetingMessageController, AWEUserModel, NSMutableArray;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMMessageAddLocalMessageInteractor : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageListDataAction, AWEIMMessageListUserInfoAction, AWEIMMessageAddLocalMessageInteractorInterface>

@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (retain, nonatomic) AWELocoalGifMessageController *locoalGifController;
@property (retain, nonatomic) AWELocalGreetingMessageController *localTopGreetingController;
@property (nonatomic) BOOL isFetchMessageFinished;
@property (retain, nonatomic) NSMutableArray *pendingSendMessages;
@property (nonatomic) BOOL hasAddedGroupOwnerMessageListGuidanceNoticeInThisLife;
@property (nonatomic) BOOL hasAddLocalInviteJoinFansGroupMessageForUser;
@property (retain, nonatomic) NSNumber *hasInsertedEntepriseActiveGuideNoticeCache;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (void)initialize;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)tryAddLocalMsg;
- (void)tryAddWarmPromptMsgWith:(id)a0;
- (void)tryAddFakePushGuideNoticeMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)tryAddFakeSleepNoticeMessage:(id)a0;
- (void)didFetchFullDetailUser:(id)a0;
- (void)filterGreetingGifInGroup:(id)a0 completion:(id /* block */)a1;
- (void)fetchMsgDidFinished;
- (void)addLocalFansGroupActiveGroupMemberNoticeWithCompletion:(id /* block */)a0;
- (void)addLocalAutoReplyGuideNoticeWithmodel:(id)a0 completion:(id /* block */)a1;
- (void)addLocalMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)tryAddLocalTopGreetingMessage;
- (void)tryAddCommerceInfoNoticeForUser:(id)a0;
- (void)tryAddEnterpriseActiveNotice;
- (void)deleteStrangerTopCardMessage;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)vcParent;
- (void)tryAddLocalStrangerConTopMessage;
- (void)addLocalMessageWithMessage:(id)a0 insertIntoDB:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)p_isGreetingMessage:(id)a0;
- (BOOL)enableAddFansGroupLocalNotice;
- (BOOL)p_shouldAddUserLabelGreetingCard;
- (void)p_tryAddLocoalGifForUser:(id)a0;
- (void)__tryAddFansGroupNoticeTipMessage;
- (void)p_tryAddLocalInviteJoinFansGroupMessageForUser:(id)a0;
- (void)p_tryAddRealNameRebindNoticeForUser:(id)a0;
- (void)p_tryAddCustomerServiceNoticeSystemMessage;
- (void)p_tryAddOperatorConsultNoticeSystemMessage;
- (void)p_tryAddVirtualAccountNotice;
- (id)p_noticeWithContent:(id)a0 aweType:(long long)a1;
- (void)__updateFrequencyControl;
- (void)__addMemoryMessage:(id)a0 withConversationID:(id)a1 globalIndex:(long long)a2 localID:(long long)a3 createTime:(long long)a4;
- (BOOL)p_disabledCauseConversationInFoldBox;
- (BOOL)p_enableAddFansGropNotice;
- (void)__addInviteFansGuidanceCardMessage;
- (BOOL)__canShowForFrequencyCheck;
- (void)addFakePrivateTipsMsg;
- (void).cxx_destruct;
- (id)groups;

@end
