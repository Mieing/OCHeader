@class NSHashTable, NSObject;
@protocol OS_dispatch_source;

@interface IESECSliceXTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSHashTable *timerListeners;
@property (nonatomic) double timeInterval;

+ (void)initialize;

- (void)addTimerListener:(id)a0;
- (void)removeTimerListener:(id)a0;
- (void)notifyTimerListeners;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)applicationDidEnterBackground:(id)a0;
- (id)initWithTimeInterval:(double)a0;
- (void)dealloc;
- (void)restartTimer;

@end
