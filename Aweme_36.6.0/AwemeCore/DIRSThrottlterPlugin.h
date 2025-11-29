@class NSString, DIRSConcurrentCollection, DIRSContext;

@interface DIRSThrottlterPlugin : DIRSBasicModule <IRISThrottlter> {
    double timeWindow;
    DIRSConcurrentCollection *requestRecords;
    double basicInterval;
    int adjustFactor;
    int consecutive;
}

@property (nonatomic) long long backOffRadio;
@property (nonatomic) long long maxRequests;
@property (readonly, nonatomic) double adjustedInterval;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)setBasicInterval:(double)a0;
- (BOOL)allowed:(id)a0 reason:(id *)a1;
- (void)_restoreAdjustment;
- (void)configure:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)adjust:(id)a0;

@end
