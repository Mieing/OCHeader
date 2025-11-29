@class NSString;

@interface AWEIMMessageTabInitialActiveInfoComponent : AWEIMComponentBase <AWEUserMessage>

@property (nonatomic) unsigned long long loadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_loadActiveInfoWithType:(unsigned long long)a0 chatList:(id)a1;
- (void)p_loadActiveInfoWithChatList:(id)a0;
- (void)p_loadFirstPageActiveInfo;
- (void)dealloc;

@end
