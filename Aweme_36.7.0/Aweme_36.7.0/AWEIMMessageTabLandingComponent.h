@class NSString;
@protocol AWEIMChatListHeaderInterface, AWEIMTabSkeletonInterface;

@interface AWEIMMessageTabLandingComponent : AWEIMComponentBase <AWEIMMessageTabLandingInterface, AWEIMMessageTabChatDataAction, AWEUserMessage, AWEIMListTabWrapperAction>

@property (nonatomic) BOOL isFirstViewDidAppeared;
@property (nonatomic) BOOL isSnapShotEnable;
@property (nonatomic) unsigned long long finishLoadChatOption;
@property (nonatomic) BOOL isLoadRemoteOfficialChatFinished;
@property (nonatomic) BOOL isLoadFirstPageDataFinished;
@property (nonatomic) double lastStorageTime;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabService;
@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)app_willResignActive;
- (void)didClearChatList;
- (void)didReloadChatList;
- (void)didFinishLoadFirstPageData;
- (void)didFinishLoadRemoteOfficialChat;
- (void)didFinishLoadThirdPartyBoxWithIDs:(id)a0;
- (void)listViewControllerDidAppear:(long long)a0;
- (id)snapShotChatList;
- (BOOL)p_enableSnapShot;
- (void)p_preloadAvatar;
- (void)p_tryDisableSnapShotForce:(BOOL)a0;
- (void)p_storeSnapShotData;
- (void).cxx_destruct;
- (void)dealloc;

@end
