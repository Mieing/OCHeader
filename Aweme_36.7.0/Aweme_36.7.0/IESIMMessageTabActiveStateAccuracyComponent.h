@class AWEIMActiveUserAccuracyTrackTimer;
@protocol AWEIMMessageTabVisibleConversationInterface, AWEIMOnlineAvatarListInterface, AWEIMChatListInterface;

@interface IESIMMessageTabActiveStateAccuracyComponent : AWEIMComponentBase

@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (weak, nonatomic) id<AWEIMOnlineAvatarListInterface> avatarListService;
@property (weak, nonatomic) id<AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (retain, nonatomic) AWEIMActiveUserAccuracyTrackTimer *trackTimer;
@property (nonatomic) double skylightSampleRate;
@property (nonatomic) double chatListSampleRate;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidAppear;
- (void)hostVC_afterFirstRender;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (void)trackIfNeededWithIndex:(long long)a0;
- (BOOL)isViewOnWindow;
- (id)chatListActiveTrackArrayForMutualFollowUsers;
- (void).cxx_destruct;

@end
