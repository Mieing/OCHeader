@class NSString, NSMutableArray;

@interface MMAssetCompositeCrashProtectInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableArray *rebootTypes;
@property (nonatomic) BOOL isUnsafe;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long taskStartTimes;
@property (readonly, nonatomic) double encodeDuration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskID:(id)a0;
- (void)onTaskStart;
- (void)onTaskEnd;
- (void)onTaskCheck:(unsigned long long)a0 isConcernedRebootType:(BOOL)a1;
- (id)description;
- (void)report;
- (id)reportString;
- (void).cxx_destruct;

@end
