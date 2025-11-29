@class NSString, NSDictionary;

@interface LSIMBulletMonitor : NSObject

@property (nonatomic) BOOL loading;
@property (nonatomic) long long loadType;
@property (nonatomic) unsigned long long timestampEndLoad;
@property (nonatomic) unsigned long long timestampStartBusiness;
@property (nonatomic) unsigned long long durationLoad;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSDictionary *customMonitorParams;

- (void)endLoading;
- (unsigned long long)p_currentTimeInterval;
- (void)startLoading:(BOOL)a0 withLoadType:(long long)a1;
- (void)logStartBusiness;
- (void)trackLoadAction:(id)a0 duration:(double)a1 errorMessage:(id)a2;
- (void)monitorEvent:(id)a0 metric:(id)a1 category:(id)a2 ext:(id)a3;
- (void).cxx_destruct;

@end
