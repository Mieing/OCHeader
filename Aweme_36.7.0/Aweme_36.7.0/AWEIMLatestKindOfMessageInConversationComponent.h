@class AWEIMConversationContext, AWEIMMessage, NSString;

@interface AWEIMLatestKindOfMessageInConversationComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (nonatomic) BOOL skip;
@property (weak, nonatomic) AWEIMConversationContext *convContext;
@property (retain, nonatomic) AWEIMMessage *targetMsg;
@property (retain, nonatomic) AWEIMMessage *targetMsgFromMe;
@property (nonatomic) long long possibleGlobalIndex;
@property (nonatomic) long long demoteGlobalIndex;
@property (nonatomic) long long initialPossibleGlobalIndex;
@property (copy, nonatomic) id /* block */ targetMsgChanged;
@property (copy, nonatomic) id /* block */ targetMsgFromMeChanged;
@property (nonatomic) BOOL backtrackingWhenRecallOrDelete;
@property (copy, nonatomic) id /* block */ isTargetMessageNotFromMeBlock;
@property (copy, nonatomic) id /* block */ isStillTargetMessageNotFromMeBlock;
@property (copy, nonatomic) id /* block */ shouldDemoteWithMessageFromMeBlock;
@property (copy, nonatomic) id /* block */ cleanUpBlock;
@property (copy, nonatomic) id /* block */ isTargetMessageFromMeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;

- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)willDeleteMessage:(id)a0;
- (void)didUpdateWithMessage:(id)a0;
- (void)demoteWithGlobalIndex:(long long)a0;
- (void)p_updateWithMessage:(id)a0 reason:(long long)a1;
- (void)p_checkWhenFirstLoadCompletedWithMessageGroups:(id)a0;
- (void)p_findLatestGiphyGlobalIndexWithLimit:(long long)a0 groups:(id)a1 skipMsg:(id)a2;
- (void)p_findSelfLatestGlobalIndexWithLimit:(long long)a0 groups:(id)a1 skipMsg:(id)a2;
- (void).cxx_destruct;
- (void)activate;
- (void)cleanUp;
- (void)dealloc;

@end
