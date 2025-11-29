@class HTSLiveAnimationStore, NSString, HTSLiveNativeAnimationScheduler, UIView, NSObject;
@protocol IESLiveMessageOptimizeService, IESLiveFeedDrawerProvider, IESLiveAlphaVideoPlayerDelegate, OS_dispatch_queue, IESLiveURLSchemaHandler;

@interface HTSLiveNotificationsFragment : IESLiveRoomComponent <IESLiveNotificationsProvider, IESLiveActivityVideoPlayerRouter, HTSLiveAnimationReactions, IESLiveMSequenceAnchorRouter>

@property (retain, nonatomic) HTSLiveAnimationStore *store;
@property (retain, nonatomic) HTSLiveNativeAnimationScheduler *engine;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) id<IESLiveFeedDrawerProvider> drawerProvider;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isHideComponent;
@property (retain, nonatomic) id<IESLiveMessageOptimizeService> messageOptimizeService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rocketProcessQueue;
@property (retain, nonatomic) id<IESLiveAlphaVideoPlayerDelegate> activityAimationVideoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)showContainer;
- (void)hideContainer;
- (void)dispatchRocketAnimationWithMessage:(id)a0;
- (void)dispatchFansClubAnimationWithMessage:(id)a0;
- (void)dispatchActivityPrizeAnimationWithMessage:(id)a0;
- (void)dispatchCommonToastWithMessage:(id)a0;
- (void)dispatchToastWithMessage:(id)a0;
- (void)setFilterPredicateForNotifyMessage:(id)a0;
- (void)enableAnimationQueueConsume:(BOOL)a0;
- (void)addFakeNotifyMessage:(id)a0 bgImageUrlList:(id)a1;
- (id)alphaVideoPlayer;
- (void)startPlayWithConfiguration:(id)a0;
- (void)remakeAnimationContainerConstrants;
- (BOOL)_enableShowNotifications;
- (BOOL)isHonorBuffMessage:(id)a0;
- (BOOL)checkByMsgProcessFilter:(id)a0;
- (void)p_dispatchRocketAnimationWithMessage:(id)a0 userModel:(id)a1;
- (id)getMessageType:(long long)a0;
- (id)userTypeForAdminNotification;
- (void)trackLiveShowWithRoomID:(id)a0 params:(id)a1 messageType:(id)a2;
- (void)trackTopMessageWithActionType:(id)a0 params:(id)a1 messageType:(id)a2 extra:(id)a3;
- (void)trackRoleNotificationShowIfNeeded:(id)a0;
- (void)p_dispatchFansClubAnimationWithMessage:(id)a0;
- (void)preloadResourceWithID:(id)a0 completion:(id /* block */)a1;
- (id)createParamsWith:(id)a0;
- (void)trackPrizeNoticeAnimationShowWithParams:(id)a0;
- (BOOL)isGuestUser:(id)a0;
- (void)stopPlaying;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)updateContent;
- (id)userType:(id)a0;

@end
