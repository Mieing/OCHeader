@class NSString, SECMetrics;

@interface AWESECLaunchTracker : NSObject

@property (copy, nonatomic) NSString *timing;
@property (retain, nonatomic) SECMetrics *metrics;
@property (nonatomic) double reportTime;

+ (unsigned long long)sample;
+ (id)settings;

- (void)startAction:(id)a0;
- (void)endAction:(id)a0;
- (id)initWithTiming:(id)a0;
- (void)reportInternal;
- (void)recordAlog;
- (void).cxx_destruct;
- (void)report;

@end
