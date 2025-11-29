@class NSMutableDictionary, NSString, AWEIMSingleChatMenuDispatcherTracker, NSMutableArray;
@protocol AWEIMSingleChatMenuProviderProtocol;

@interface AWEIMSingleChatMenuDispatcherComponent : AWEIMComponentBase <AWEIMSingleChatMenuDispatcherInterface, AWEIMMessageListUserInfoAction>

@property (retain) NSMutableDictionary *providerStatusMap;
@property (retain) NSMutableArray *providerArray;
@property (weak) id<AWEIMSingleChatMenuProviderProtocol> lastShowProvider;
@property (retain) AWEIMSingleChatMenuDispatcherTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)setEnterForm:(id)a0;
- (void)didGetLocalUser:(id)a0;
- (void)didFetchServerUser:(id)a0;
- (void)registerMenuProvider:(id)a0;
- (void)provider:(id)a0 completedFetchingMenu:(BOOL)a1;
- (void)startTrackMenuFetchWithLocalUser:(id)a0;
- (void)endTrackMenuFetchWithMenuType:(long long)a0;
- (void)__checkDecisionMakingConditions;
- (void)__notifyHighestProvierToShowMenu;
- (void).cxx_destruct;
- (id)init;

@end
