@class NSTimer, NSHashTable;

@interface AWEHomepageTimer : NSObject

@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)timerTimerInterval:(double)a0;

- (id)initWithTimerInterval:(double)a0;
- (void)tryLoadTimer;
- (void)p_tryUnloadTimerForCheckObservers;
- (void)p_callObservers;
- (void)tryUnloadTimer;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)onFire:(id)a0;

@end
