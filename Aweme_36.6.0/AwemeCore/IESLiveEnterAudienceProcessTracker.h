@interface IESLiveEnterAudienceProcessTracker : NSObject

+ (id)feedLabelTypeMapToString:(int)a0;
+ (id)feedLabelTypeTrackerInfo:(id)a0;
+ (void)trackEnterRoomAisleConflict:(unsigned long long)a0 ongoingRoomAisle:(id)a1 incomingRoomAisle:(id)a2;
+ (void)ieslive_trackPerformanceBeforeEnterRoom:(id)a0 isFirst:(BOOL)a1;
+ (void)ieslive_trackRecLivePlayWithRoomAisle:(id)a0;
+ (void)enterRoomErrorTrack:(id)a0;

@end
