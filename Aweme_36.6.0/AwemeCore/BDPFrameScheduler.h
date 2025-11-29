@class CADisplayLink, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPFrameScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableDictionary *allTasks;
@property (retain, nonatomic) CADisplayLink *link;
@property (nonatomic) double oneFrameDuration;
@property (nonatomic) long long runningTick;
@property (nonatomic) long long incresingID;
@property (nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (void)startDisplayLink;
- (long long)scheduleTask:(id /* block */)a0 onSerialQueue:(id)a1 frequency:(long long)a2 times:(long long)a3 completion:(id /* block */)a4;
- (void)removeScheduledTask:(long long)a0;
- (void)dispatchSync:(BOOL)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pauseDisplayLink;
- (id)init;
- (void)dealloc;
- (void)stopDisplayLink;
- (void)tick:(id)a0;

@end
