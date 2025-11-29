@interface TTNetworkManagerMonitorNotifier : NSObject

@property (nonatomic) BOOL enable;

+ (id)defaultNotifier;
+ (id)reqSelToReportType:(SEL)a0;

- (void)notifyCdnCacheVerifyResponse:(id)a0 forRequest:(id)a1 errorState:(id)a2;
- (void)notifyForMonitorFinishResponse:(id)a0 forRequest:(id)a1 error:(id)a2 response:(id)a3;
- (void)notifyForMonitorSampleRequest:(id)a0;
- (void)notifyForMonitorStartRequest:(id)a0 hasTriedTimes:(long long)a1;

@end
