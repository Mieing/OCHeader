@class NSString;

@interface AWELiveTrackerImpl : NSObject <IESLiveTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackEventWithNoLivePrefix:(id)a0 params:(id)a1;
- (void)setTrackerDelegate:(id)a0;
- (void)vsTrackEvent:(id)a0 params:(id)a1;
- (void)vsTrackEvent:(id)a0 params:(id)a1 isLive:(BOOL)a2;
- (void)trackADTag:(id)a0 label:(id)a1 extra:(id)a2;
- (void)trackADTag:(id)a0 label:(id)a1 refer:(id)a2 groupID:(id)a3 creativeID:(id)a4 logExtra:(id)a5 extraParams:(id)a6;
- (void)trackADTag:(id)a0 label:(id)a1 refer:(id)a2 creativeID:(id)a3 logExtra:(id)a4 adID:(id)a5 adExtraData:(id)a6;
- (void)trackADVsEvent:(id)a0 label:(id)a1 refer:(id)a2 eventType:(id)a3 adExtraData:(id)a4;
- (void)trackLiveRoomADLabel:(id)a0 extra:(id)a1;
- (BOOL)checkCanTrackAdVs:(id)a0;

@end
