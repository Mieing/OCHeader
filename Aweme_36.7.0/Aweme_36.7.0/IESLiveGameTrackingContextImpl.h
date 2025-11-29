@class HTSEventContext, NSMutableDictionary, NSString;

@interface IESLiveGameTrackingContextImpl : IESLiveGameContextNode <IESLiveGameTrackingContext>

@property (retain, nonatomic) NSMutableDictionary *durationTrackingMap;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)clearAllMonitorDurationRecord;
- (id)p_trackingParamsDictionary;
- (void)trackDurationEnd:(id)a0 extra:(id)a1 timeUnit:(long long)a2;
- (void)trackDurationStart:(id)a0 extra:(id)a1;
- (void)trackDurationEnd:(id)a0 extra:(id)a1;
- (void)trackAudienceEvent:(id)a0 extra:(id)a1;
- (void)trackAnchorEvent:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
