@class IRISUsageAlarm;

@interface IRISThrottlter : NSObject {
    double basicInterval;
    unsigned long long intervalFactor;
    unsigned long long consecutiveSuccessCount;
}

@property (nonatomic) long long backOffRatio;
@property (nonatomic) long long maxRequests;
@property (retain, nonatomic) IRISUsageAlarm *requestAlarm;
@property (readonly) double interval;
@property (copy, nonatomic) id /* block */ onRestrict;

- (void)countResult:(unsigned long long)a0;
- (void)setBasicInterval:(double)a0;
- (void)configurationUpdated:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAllowed:(id)a0;

@end
