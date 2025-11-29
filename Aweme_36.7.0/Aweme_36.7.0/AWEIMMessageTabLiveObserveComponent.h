@class NSMutableDictionary, NSTimer, NSString, NSObject, UIViewController;
@protocol AWELiveCheckDataManagerService, OS_dispatch_queue, AWELiveModuleService, AWEIMMessageTabVisibleConversationInterface;

@interface AWEIMMessageTabLiveObserveComponent : AWEIMComponentBase <AWEIMChatListScrollAction, IESIMMessageTabLiveObserver, IESIMUserServiceMessage, AWELiveCheckDataManagerSubscriber>

@property (weak, nonatomic) id<AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (retain, nonatomic) id<AWELiveModuleService> liveModuleService;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) BOOL enableLiveCheck;
@property (nonatomic) BOOL fixCorrectScene;
@property (retain, nonatomic) NSTimer *shortLinkTimer;
@property (retain, nonatomic) NSMutableDictionary *userLiveStatusInfoDict;
@property (retain, nonatomic) NSMutableDictionary *chatLiveStatusObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncQueue;
@property (retain, nonatomic) UIViewController *messageRootVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)onLiveUpdateReceive:(id)a0 PageType:(long long)a1;
- (void)updateMainChatList:(id)a0;
- (void)subscribeLiveStatusOfChat:(id)a0 subscriber:(id)a1;
- (void)unsubscribeLiveStatusOfChat:(id)a0 subscriber:(id)a1;
- (void)notifyRoomFinishedWithUserID:(id)a0;
- (void)chatListDidEndScroll;
- (void)startShortLinkFetchTimer;
- (void)liveStatusSubscribe;
- (void)fetchLiveData;
- (void)p_fetchLiveData;
- (void)p_handleLiveStatusNotify:(id)a0 fromShortLink:(BOOL)a1;
- (void)p_refactorSubscribedLive;
- (void)p_refactorVisibleChatLiveModelsWithCompletion:(id /* block */)a0;
- (void)refactorSubscribedLive;
- (id)p_visibleChatLiveModels;
- (id)p_visibleChatModels;
- (id)p_liveStatusInfoOfConvID:(id)a0 userID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
