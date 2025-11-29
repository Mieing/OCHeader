@class NSMutableArray;

@interface BDUGLocationHMDMonitorRecord : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _recordMonitorBlockMutex;
}

@property (retain, nonatomic) NSMutableArray *recordMonitorBlockArray;
@property (nonatomic) BOOL isMonitorInit;

+ (id)currentMonitor;

- (BOOL)addMonitorBlockWithBlock:(id /* block */)a0;
- (void)reportRecordBlockMonitor;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
