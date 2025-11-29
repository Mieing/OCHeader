@class NSTimer;

@interface BDUGLocationDAQ : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pollingTimerMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _reportIntervalMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lastReportTimeMutex;
}

@property (retain, nonatomic) NSTimer *pollingTimer;
@property (nonatomic) BOOL isLocalReportInterval;
@property (nonatomic) double lastNetChangeTimestamp;
@property (nonatomic) double lastReportTimestamp;
@property (nonatomic) double reportInterval;

+ (id)sharedDAQ;

- (void)onReceivedWillEnterForegroundNotification:(id)a0;
- (void)onReceivedWillEnterBackgroundNotification:(id)a0;
- (void)coldLaunchReportInfo;
- (void)reportExtraInfo;
- (void)_daqReportBasicInfoWithType:(long long)a0;
- (void)_refreshLocationPollingReportIntervalWithType:(long long)a0;
- (void)_invalidteTimer;
- (void)_reportLocationInfoWithType:(long long)a0;
- (void)onReceivedNetworkStatusChangedNotification:(id)a0;
- (void)_daqReportLocationInfoWithType:(long long)a0;
- (void)_requestAndReportLocationInfoWithType:(long long)a0;
- (id)uploadSourceWithType:(long long)a0;
- (void)_coldLaunchReportLocation;
- (void)startDataAcquisition;
- (void)bootIntelligentDAQWithConfig:(id)a0 isCache:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
