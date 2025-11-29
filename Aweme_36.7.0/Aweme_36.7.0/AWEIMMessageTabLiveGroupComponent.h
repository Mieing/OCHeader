@class NSString;
@protocol AWEIMMessageTabVisibleConversationInterface;

@interface AWEIMMessageTabLiveGroupComponent : AWEIMComponentBase <AWEIMLiveGroupInfoManagerDelegate, AWEIMMessageTabLiveGroupInterface>

@property (weak, nonatomic) id<AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)possiblyStartPollingLiveGroupInfo;
- (void)stopPollingLiveGroupInfoWithViewDisappeared:(BOOL)a0;
- (void).cxx_destruct;
- (id)visibleConversations;

@end
