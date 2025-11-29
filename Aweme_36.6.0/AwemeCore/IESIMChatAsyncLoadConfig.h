@class NSDictionary;

@interface IESIMChatAsyncLoadConfig : NSObject

@property (class, readonly, nonatomic) NSDictionary *dict;
@property (class, readonly, nonatomic) BOOL enableInfoLog;
@property (class, readonly, nonatomic) BOOL enableErrorLog;
@property (class, readonly, nonatomic) BOOL enableTrack;
@property (class, readonly, nonatomic) long long trackSample;
@property (class, readonly, nonatomic) long long firstScreenMinimumChatCount;
@property (class, readonly, nonatomic) long long snapshotExpireDurationInSec;
@property (class, readonly, nonatomic) long long snapshotCacheIntervalInSec;
@property (class, readonly, nonatomic) long long commonQueueInvokeDurationLogThreshold;
@property (class, readonly, nonatomic) long long commonQueueMeasurementSample;

@end
