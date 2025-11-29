@class NSString, NSMutableDictionary;

@interface HTSLiveMetricTrackerData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) BOOL isCommonMetric;
@property (retain, nonatomic) NSMutableDictionary *currentRoomTracker;
@property (readonly, nonatomic) unsigned long long currentRoomTracker_Count;
@property (retain, nonatomic) NSMutableDictionary *useOnceTracker;
@property (readonly, nonatomic) unsigned long long useOnceTracker_Count;
@property (retain, nonatomic) NSMutableDictionary *allRoomTracker;
@property (readonly, nonatomic) unsigned long long allRoomTracker_Count;

+ (id)descriptor;

@end
