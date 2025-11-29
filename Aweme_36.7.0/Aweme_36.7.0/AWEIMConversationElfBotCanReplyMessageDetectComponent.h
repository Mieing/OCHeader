@class NSString, AWEIMMessageConversation, NSMutableDictionary;

@interface AWEIMConversationElfBotCanReplyMessageDetectComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageElfBotCanReplyDetectService>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSMutableDictionary *targetInfoDict;
@property (nonatomic) BOOL isFirstLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didUpdateWithMessage:(id)a0;
- (BOOL)isInTargetInfoDictionaryWithMessageID:(id)a0;
- (void)addMessageToCacheIfNeeded:(id)a0;
- (BOOL)p_isTargetMessageType:(id)a0;
- (void).cxx_destruct;

@end
