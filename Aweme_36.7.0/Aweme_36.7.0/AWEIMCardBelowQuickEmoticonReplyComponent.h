@class NSString, AWEIMMessageConversation, NSMutableDictionary;
@protocol IESIMHttpTask;

@interface AWEIMCardBelowQuickEmoticonReplyComponent : AWEIMComponentBase <AWEIMFeedDetailSendMessage, AWEIMMessageContentMaskAction, AWEIMMessageListDataAction, AWEIMCardBelowQuickEmoticonReplyComponent>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long initialPossibleGlobalIndex;
@property (nonatomic) long long lastGlobalIndexFromMe;
@property (nonatomic) unsigned long long requestCount;
@property (weak, nonatomic) id<IESIMHttpTask> requestTask;
@property (retain, nonatomic) NSMutableDictionary *targetModelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isUserMessage:(id)a0;
+ (id)formatDataWithEmojiReplyArray:(id)a0 preferredCount:(long long)a1;
+ (BOOL)updateCacheModel:(id)a0 withRenderModels:(id)a1 preferredCount:(long long)a2;
+ (id)requestWithModel:(id)a0 preferredCount:(long long)a1 conversation:(id)a2 completion:(id /* block */)a3;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)sharedCache;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_afterFirstRender;
- (void)imFeedDetailSendMessageWithQuoteMessage:(id)a0;
- (void)p_updateInitialGlobalIndex;
- (void)resetWithServerMessageID:(long long)a0;
- (long long)initialPossibleGlobalIndexOfConversation:(id)a0;
- (BOOL)isConversationCanShow;
- (BOOL)p_enableQuickReplyWithMessage:(id)a0;
- (id)p_targetModelMessage:(id)a0;
- (void)p_fetchEmojiReplyWithTargetModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
