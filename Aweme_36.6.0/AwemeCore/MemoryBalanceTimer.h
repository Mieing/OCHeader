@class NSMutableDictionary;

@interface MemoryBalanceTimer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *timerContainer;

+ (id)sharedInstance;

- (void)cancelTimerWithName:(id)a0;
- (BOOL)existTimer:(id)a0;
- (void)scheduledDispatchTimerWithName:(id)a0 timeInterval:(double)a1 queue:(id)a2 repeats:(BOOL)a3 action:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
