@class NSObject;
@protocol OS_dispatch_source;

@interface HMDGCDTimer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (void)scheduledDispatchTimerWithInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 action:(id /* block */)a3;
- (BOOL)existTimer;
- (void).cxx_destruct;
- (void)cancelTimer;
- (id)init;

@end
