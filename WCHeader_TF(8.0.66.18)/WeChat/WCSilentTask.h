@class NSString, MMContext, NSRecursiveLock;

@interface WCSilentTask : NSObject

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long policy;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) int maxConcurrentCount;
@property (retain, nonatomic) MMContext *context;
@property (nonatomic) int cumulativeCount;
@property (nonatomic) double cumulativeWallTime;
@property (nonatomic) int overTimeCount;
@property (nonatomic) int stackReportCount;

- (id)initWithName:(id)a0;
- (void)runLoop;
- (void)willPause;
- (void)didPause;
- (void)willResume;
- (void)didResume;
- (BOOL)start;
- (BOOL)stop;
- (BOOL)changeStatusFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)description;
- (void)printSummary;
- (void).cxx_destruct;

@end
