@class NSString;

@interface HMDNetQualityTracker : NSObject <HMDNetQualityProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _qualityTypeLock;
}

@property BOOL isRunning;
@property (nonatomic) long long currentNetQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)startNetQualityMonitor;
- (void)stopNetQualityMonitor;
- (void)hmdCurrentNetQualityDidChange:(long long)a0;
- (void)switchNetQualityTrackerStatus:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
