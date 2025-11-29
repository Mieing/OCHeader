@class IESECGCDTimer;

@interface IESECLiveTimeCenter : IESECEventPublisher

@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) double interval;

- (id)scheduledTimerWithBlock:(id /* block */)a0;
- (void)removeEventHandlerForKey:(id)a0;
- (id)timerWithUnObserveHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)initWithInterval:(double)a0;
- (id)addEventHandler:(id /* block */)a0;
- (void)dealloc;
- (void)setupTimer;
- (id)timerWithBlock:(id /* block */)a0;

@end
