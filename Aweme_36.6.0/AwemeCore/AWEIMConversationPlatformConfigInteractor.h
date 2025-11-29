@class NSArray, NSString;

@interface AWEIMConversationPlatformConfigInteractor : AWEIMComponentBase <AWEIMMessageListUserInfoAction, AWEIMConversationPlatformConfigInteractorInterface>

@property (copy, nonatomic) NSArray *platformChatPanels;
@property (nonatomic) BOOL needRefreshWhenFetchFullUser;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (BOOL)enable;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)__fetchData;
- (id)vcParent;
- (void)p_preloadLocalData;
- (void)__prepareLocalDataWithCompletion:(id /* block */)a0;
- (void)__updateChatPanels;
- (void)__updateCacheWithJson:(id)a0;
- (void).cxx_destruct;
- (id)conversation;
- (void)refreshData;

@end
