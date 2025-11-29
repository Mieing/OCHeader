@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMUserDBIOTracker : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableDictionary *targets;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long loopInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (nonatomic) BOOL enableTrace;

- (void)p_clearTimer;
- (void)beginTrace;
- (void)p_trackWithParams:(id)a0;
- (void)p_trackAllTargets;
- (void)trackOneUserReadScene:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
