@interface BUTrackerDispatchManager : NSObject

+ (id)sharedInstance;

- (void)eventData:(id)a0 trackType:(long long)a1;
- (id)___params_urlDecodeIfNeedWithParmas:(id)a0;
- (void)___urlDecodeIfNeedWithMutDict:(id)a0 key:(id)a1;
- (void)applog_eventData:(id)a0;
- (void)applog_eventData:(id)a0 eventConfig:(id)a1;
- (void)stats_eventData:(id)a0;
- (void)updateNeedReportDelayInDispatchManager:(BOOL)a0;
- (id)init;
- (void)setup;

@end
