@class NSString, NSNumber, NSDictionary;

@interface AWEGrouponLifeFeedsPerformanceMonitorPlugin : AWEGrouponLifeFeedsBasePlugin

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double pageInitTime;
@property (nonatomic) double fetchMainDataStartTime;
@property (nonatomic) double fetchMainDataEndTime;
@property (nonatomic) double bindMainDataStartTime;
@property (nonatomic) double bindMainDataEndTime;
@property (nonatomic) double bindMainDataEndTimeSince1970;
@property (copy, nonatomic) NSNumber *ttiTypeNumber;
@property (nonatomic) BOOL pageDidFirstLayout;
@property (nonatomic) BOOL pageDidBindMainData;
@property (copy, nonatomic) NSDictionary *networkTrackParams;
@property (nonatomic) BOOL didTrackTiming;
@property (copy, nonatomic) id /* block */ extraParamsBlock;

- (void)componentStartShow:(id)a0 reason:(unsigned long long)a1;
- (void)startFetchPrefetchData;
- (void)endFetchPrefetchData:(id)a0 error:(id)a1;
- (void)startFetchMainData:(id)a0;
- (void)startBindPageViewModel:(id)a0;
- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void)pageLayoutIfNeed;
- (id)initWithScene:(id)a0 pageInitTime:(double)a1;
- (void)trackPageTTIWithNetworkTrackParams:(id)a0;
- (unsigned long long)durationWithEndTime:(double)a0 startTime:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
