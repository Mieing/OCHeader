@class TSPKDelayDetectModel, NSObject;
@protocol OS_dispatch_source, TSPKDelayDetectDelegate, TSPKLock;

@interface TSPKDelayDetectSchduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double lastCheckTime;
@property (nonatomic) double scheduleDetectTime;
@property (retain, nonatomic) TSPKDelayDetectModel *delayDetectModel;
@property (weak, nonatomic) id<TSPKDelayDetectDelegate> delegate;
@property (retain, nonatomic) id<TSPKLock> lock;

- (void)addNotifications;
- (double)timeDelay;
- (void)applicationBecomeInactive;
- (void)executeDetectAction;
- (id)initWithDelayDetectModel:(id)a0 delegate:(id)a1;
- (void)startDelayDetect;
- (void)stopDelayDetect;
- (void)cancelDetectAction;
- (void)scheduleDetectAction;
- (BOOL)isDelaying;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeNotifications;

@end
