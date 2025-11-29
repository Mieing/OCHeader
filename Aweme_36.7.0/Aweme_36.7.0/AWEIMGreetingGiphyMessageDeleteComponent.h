@class NSString;

@interface AWEIMGreetingGiphyMessageDeleteComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMGreetingGiphyMessageDeleteComponentInterface>

@property (nonatomic) BOOL hasGreetingMessage;
@property (nonatomic) BOOL shouldCheckHistory;
@property (nonatomic) BOOL dismissOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isTargetMessage:(id)a0;
+ (id)p_findTargetMessageInGroup:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (id)listViewModel;
- (void)markHasGreetingMessage;
- (void)removeGreetingMessageIfNeeded:(id)a0;
- (void)removeGreetingMessage;
- (void)p_deleteMessage:(id)a0;

@end
