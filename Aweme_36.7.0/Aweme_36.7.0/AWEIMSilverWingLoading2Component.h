@class AWEIMMessage, NSArray, NSString, AWEIMMessageViewModel;

@interface AWEIMSilverWingLoading2Component : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMSilverWingLoading2Interface>

@property (retain, nonatomic) AWEIMMessage *fakeSilverWingLoadingMsg;
@property (nonatomic) BOOL didFirstLoad;
@property (copy, nonatomic) NSArray *noReplyMentionMessagesV2;
@property (copy, nonatomic) NSString *currentLoadingBotUid;
@property (weak, nonatomic) AWEIMMessageViewModel *extendedViewModel;
@property (nonatomic) long long lastShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)msgTypeBlockList;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)messageDataControllerDidModified;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didUpdateWithMessage:(id)a0;
- (void)p_addKVO;
- (void)p_trackLoadingDismissWithReason:(id)a0 replyBotID:(id)a1;
- (BOOL)p_isGroupAIOpen;
- (BOOL)p_isGroupBlock;
- (void)p_deleteFakeLoadingMessageIfNeededWithReason:(id)a0 replyBotID:(id)a1;
- (void)p_updateNoReplyBotsV2;
- (void)insertFakeMessageForLoadingIfNeededWithRetryCount:(long long)a0;
- (long long)p_timeOut;
- (void)p_handleTimeOut;
- (BOOL)p_isAIMessage:(id)a0;
- (BOOL)p_couldMentionAwakenLoadingWithUid:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
