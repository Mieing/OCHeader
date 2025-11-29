@interface HMDCustomReportConfig : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } intervalLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } sizeLock;
}

@property long long customReportMode;
@property long long thresholdSize;
@property long long uploadInterval;

- (id)initConfigWithMode:(long long)a0;

@end
