@class HMDTTMonitor, HMDThreadSafeArray;

@interface BDUGPushMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (retain, nonatomic) HMDThreadSafeArray *recordLog;
@property (nonatomic) double registerApnsStartTime;
@property (nonatomic) BOOL uidChangedHasToken;
@property (nonatomic) double uidChangedStartTime;
@property (nonatomic) BOOL isUidChanged;
@property (nonatomic) BOOL uidChangedIsUniformed;
@property (nonatomic) double syncDataStartTime;
@property (nonatomic) BOOL isSyncData;

+ (id)sharedInstance;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackPushBadgeCountErrorWithCount:(long long)a0;
- (void)registMonitor;
- (void)trackSyncDataMetric:(double)a0 status:(BOOL)a1 errMsg:(id)a2;
- (void)trackSetDelegateMetric:(double)a0;
- (void)trackUpdateSendMetric:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
- (void)trackApnsRegisterMetric:(double)a0 status:(long long)a1 errMsg:(id)a2 tokenChanged:(BOOL)a3;
- (void)trackUpdateTokenMetric:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
- (void)trackUIDChangedMetric:(double)a0 isUniformed:(BOOL)a1 hasToken:(BOOL)a2 isSync:(BOOL)a3 errMsg:(id)a4;
- (void)trackAuthStatus:(BOOL)a0 errMsg:(id)a1;
- (void)trackAppNoticeStatusMetric:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
- (void)trackGetNoticeStatusMetric:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
- (void)trackPushSignalTriggerSingalName:(id)a0;
- (void)trackPushMonitorNetworkRequestResultMetric:(double)a0 path:(id)a1 method:(id)a2 status:(BOOL)a3 errCode:(id)a4 errMsg:(id)a5 category:(id)a6 extra:(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
