@protocol RTVVoipTrackerHelperInterface, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVEffectGameTracker : RTVInteractionTracker

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> perfMonitor;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;

- (void)rxAwakeFromPropertyInjection;
- (void)tracker_showCastVideoPanelWithSession:(id)a0 belongUserType:(id)a1 videoFrom:(id)a2 tabName:(id)a3 mixID:(id)a4 challengeID:(id)a5 extraInfo:(id)a6;
- (void)tracker_clickPlayRecommendVideoButtonWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_clickShareButtonWithSession:(id)a0 hasHotReminder:(BOOL)a1 extraInfo:(id)a2;
- (void)track_livesdkEnterCoplayMiniWithMemberCnt:(unsigned long long)a0 eventType:(id)a1 extraInfo:(id)a2;
- (void)track_enterChatWithMethod:(id)a0 chatType:(id)a1 convID:(id)a2 extraInfo:(id)a3;
- (void)trackGameEnterWithVoIPRoomID:(id)a0 gameName:(id)a1;
- (void)trackGamePageOverWithVoIPRoomID:(id)a0 isAnswer:(BOOL)a1 enterFrom:(long long)a2 duration:(double)a3;
- (void)track_livesdReturnFullScreenWithExtraInfo:(id)a0;
- (void)trackGameOverWithVoIPRoomID:(id)a0 isAnswer:(BOOL)a1 gameName:(id)a2 enterFrom:(long long)a3 duration:(double)a4;
- (void)trackGameEnterOverWithVoIPRoomID:(id)a0;
- (void)trackGameTakeWithVoIPRoomID:(id)a0 gameName:(id)a1 enterFrom:(long long)a2;
- (void)trackGameTakePrepareWithVoIPRoomID:(id)a0 enterFrom:(long long)a1;
- (void)trackGameEnterPrepareWithVoIPRoomID:(id)a0;
- (id)__enterFromStrWithEnterFrom:(long long)a0;
- (id)__commonParamsWithSession:(id)a0;
- (void).cxx_destruct;

@end
