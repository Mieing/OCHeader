@class HMDHeimdallrConfig, NSMutableArray, HMDCustomReportConfig;

@interface HMDCustomReportManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwCurrentLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwCacheLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwIntervalLock;
    double _lastReportTime;
}

@property unsigned long long thresholdSize;
@property unsigned long long uploadIntervalSec;
@property long long customReportMode;
@property (retain, nonatomic) NSMutableArray *cachedCustomConfigs;
@property (retain) HMDCustomReportConfig *currentConfig;
@property (retain, nonatomic) HMDHeimdallrConfig *heimdallrConfig;

+ (id)defaultManager;

- (void)updateConfig:(id)a0;
- (void)startWithConfig:(id)a0;
- (void)cacheOneConfig:(id)a0;
- (void)switchCurrentReportMode;
- (void)removeOneConfigWithMode:(long long)a0;
- (void)startNormalUpload;
- (void)removeAllConfigs;
- (long long)getReportIntervalOfSetting;
- (void)stopWithCustomMode:(long long)a0;
- (void)triggerReport;
- (void).cxx_destruct;
- (id)init;

@end
