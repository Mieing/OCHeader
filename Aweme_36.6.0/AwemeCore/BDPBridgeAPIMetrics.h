@class NSString, NSError, NSNumber;

@interface BDPBridgeAPIMetrics : NSObject <NSCopying>

@property (copy, nonatomic) NSString *APIName;
@property (nonatomic) unsigned long long invokeType;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;
@property (nonatomic) double preCheckBeginTime;
@property (nonatomic) double preCheckEndTime;
@property (nonatomic) BOOL isWukong;
@property (nonatomic) double scheduleBeginTime;
@property (nonatomic) double executeBeginTime;
@property (nonatomic) double callbackBeginTime;
@property (copy, nonatomic) NSError *APIError;
@property (copy, nonatomic) NSNumber *callbackId;
@property (readonly, nonatomic) double checkTotalTime;
@property (readonly, nonatomic) double excuteTotalTime;
@property (readonly, nonatomic) double totalTime;
@property (nonatomic) long long invocationCount;

+ (id)APIMetricsWithAPIInfo:(id)a0;
+ (double)currentTimestamp;

- (id)initWithAPIInfo:(id)a0;
- (double)checkTotalTime;
- (double)excuteTotalTime;
- (void).cxx_destruct;
- (double)totalTime;
- (void)invoke;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
