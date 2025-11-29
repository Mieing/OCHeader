@class IESLiveInteractionTrackerContextImpl, HTSEventContext, NSMutableDictionary, NSString, IESLiveInteractionTrackerCommonContextImpl, IESLiveInteractionTrackerContextInjectionImpl;
@protocol IESLiveInteractionTrackerCommonContext, IESLiveInteractionTrackerContext;

@interface IESLiveInteractionTrackerImpl : NSObject <HTSLiveRoomRemoteActions, IESLiveInteractionTracker>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveInteractionTrackerCommonContextImpl *commonContextImpl;
@property (retain, nonatomic) IESLiveInteractionTrackerContextImpl *contextImpl;
@property (retain, nonatomic) IESLiveInteractionTrackerContextInjectionImpl *contextInjectionImpl;
@property (retain, nonatomic) NSMutableDictionary *durationTrackingMap;
@property (retain, nonatomic) NSMutableDictionary *extraParamsSnapChatMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveInteractionTrackerCommonContext> commonContext;
@property (readonly, nonatomic) id<IESLiveInteractionTrackerContext> context;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)trackCustomEvent:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 withDurationStart:(id)a1 params:(id)a2;
- (void)trackEvent:(id)a0 withDurationStart:(id)a1 atCustomStartTime:(double)a2 params:(id)a3;
- (void)trackDurationEnd:(id)a0 params:(id)a1;
- (void)trackCustomEventWithSnapChatExtraParams:(id)a0 extra:(id)a1;
- (void)updateCommonContextWithRoom:(id)a0;
- (void)snapChatExtraParamsForEvent:(id)a0 params:(id)a1;
- (BOOL)__trackDurationStart:(id)a0;
- (BOOL)__trackDurationStart:(id)a0 atCustomStartTime:(double)a1;
- (void)trackDurationEnd:(id)a0 key:(id)a1 params:(id)a2;
- (id)extraParamsSnapChatEvents;
- (id)injectContextWithBlock:(id /* block */)a0 originContext:(id)a1;
- (id)injectContextWithBlockWithLayout:(id /* block */)a0 layout:(id)a1 originContext:(id)a2;
- (id)playmodeEventDurationKeyWithEventName:(id)a0 extra:(id)a1;
- (void)livesdk_anchor_audience_connection_open_success:(id)a0;
- (void)livesdk_anchor_audience_connection_over:(id)a0;
- (void)livesdk_guest_connection_success:(id)a0;
- (void)livesdk_guest_connection_over:(id)a0;
- (void)livesdk_anchor_playmode_open_success:(id)a0;
- (void)livesdk_anchor_playmode_over:(id)a0;
- (void)livesdk_audience_playmode_room_watch:(id)a0;
- (void)livesdk_audience_playmode_room_watch_duration:(id)a0;
- (void)livesdk_audience_voice_room_show:(id)a0;
- (void)livesdk_audience_voice_room_show_v4:(id)a0;
- (void)livesdk_voice_room_watch_duration:(id)a0;
- (void).cxx_destruct;
- (id)context;
- (id)commonContext;
- (void)clean;

@end
