@class NSMutableDictionary, AWEMessageReachTriggerInfo;

@interface AWEMessageReachTriggerRecorder : NSObject

@property (nonatomic) long long currentRequestCount;
@property (nonatomic) long long sessionRequestCount;
@property (retain, nonatomic) NSMutableDictionary *requestInfoDict;
@property (retain, nonatomic) AWEMessageReachTriggerInfo *latestTrigger;

- (id)getTriggerTrackParams:(id)a0 requestTime:(double)a1;
- (void)recordTriggerEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
