@class NSHashTable;

@interface HMDBackgroundMonitor : NSObject

@property (retain, nonatomic) NSHashTable *delegateTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } delegate_mutex;
@property (readonly, nonatomic) BOOL isBackground;

+ (id)sharedInstance;

- (void)addStatusChangeDelegate:(id)a0;
- (void)removeStatusChangeDelegate:(id)a0;
- (void)updateBackgroundState;
- (void)foregroundNotification:(id)a0;
- (void)backgroundNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
