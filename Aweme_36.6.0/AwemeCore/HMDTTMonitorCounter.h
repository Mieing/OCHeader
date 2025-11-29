@class NSString, HMDGCDTimer;

@interface HMDTTMonitorCounter : NSObject {
    BOOL _loaded;
    struct EventCounter { long long x0; long long x1; } *_counter;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) HMDGCDTimer *timer;

- (id)initWithAppID:(id)a0;
- (BOOL)_loadConfigIfNeededInLock;
- (long long)generateUniqueCode;
- (void).cxx_destruct;
- (void)_flush;
- (void)dealloc;
- (long long)generateSequenceNumber;

@end
