@class RxScheduler, NSString;
@protocol RTVMonitor, RTVUserProfileManagerInterface, RxInjector, RTVXRControllerInjector, RTVXRRoomSessionControllerInterface, RTVPerformanceMonitorInterface;

@interface RTVFeedMonitor : NSObject <RTVXRControllerInterface, RTVFeedMonitorInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomControlller;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RxScheduler *commonScheduler;
@property (readonly, nonatomic) BOOL hasPreloadFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)commonMonitorParamsWithSession:(id)a0;
- (void)invokeFeedShareWithRoomID:(id)a0 type:(long long)a1 identifier:(id)a2 isFirst:(BOOL)a3;
- (void)feedShareInvokeResultWithSession:(id)a0 identifier:(id)a1 dictionary:(id)a2 success:(BOOL)a3 isFirst:(BOOL)a4 error:(id)a5;
- (void)joinFeedShareWithSession:(id)a0;
- (void)monitorFeedShareSwitchWithSession:(id)a0;
- (void)monitorFeedSharePageStartLoadWithSession:(id)a0;
- (void)markStartFeedShareWithSession:(id)a0;
- (void)monitorFirstFrameWithSession:(id)a0 result:(id)a1;
- (void)monitorPageShownWithSession:(id)a0;
- (void)endFeedShareWithSession:(id)a0 endReason:(long long)a1;
- (void)monitorChannelAvailableWithSession:(id)a0 duration:(double)a1 monitorCount:(long long)a2 seiAvailableCount:(long long)a3 rtvAvaibleCount:(long long)a4;
- (void)monitorSEICommandSendWithSession:(id)a0 command:(id)a1 dictionary:(id)a2;
- (void)monitorFakeStreamWithSession:(id)a0 dictionary:(id)a1;
- (void)startTimedEventWithIdentifier:(id)a0;
- (void)endTimedEventForIdentifier:(id)a0 service:(id)a1 dictionary:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void)monitorDragInteractionPreviewContainerWithSession:(id)a0 dragType:(unsigned long long)a1;
- (void)monitorChatEnablementWithSession:(id)a0 conversationID:(id)a1 source:(unsigned long long)a2 duration:(long long)a3 messagesCount:(unsigned long long)a4;
- (void)monitorFeedRoomSettingsInconsistenceWithSession:(id)a0;
- (void)updatePreloadFeedShare:(BOOL)a0;
- (void)__hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)__monitorErrorInfoWithError:(id)a0;
- (id)__commonParamsWithSession:(id)a0;
- (id)__sourceStringWithFeedSource:(long long)a0;
- (id)__markerWithRoomID;
- (id)__awemeTypeStringWithAwemeType:(long long)a0;
- (void).cxx_destruct;

@end
