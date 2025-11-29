@class NSString;
@protocol AWEIMMessageTabVisibleConversationInterface, AWELiveModuleService, AWELiveCheckDataManagerService;

@interface AWEIMMessageTabLiveObserveComponent : AWEIMComponentBase <AWEIMChatListScrollAction>

@property (weak, nonatomic) id<AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (retain, nonatomic) id<AWELiveModuleService> liveModuleService;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) BOOL enableLiveCheck;
@property (nonatomic) BOOL fixCorrectScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)chatListDidEndScroll;
- (void)liveStatusSubscribe;
- (id)p_visibleChatLiveModels;
- (id)p_visibleChatModels;
- (void).cxx_destruct;

@end
