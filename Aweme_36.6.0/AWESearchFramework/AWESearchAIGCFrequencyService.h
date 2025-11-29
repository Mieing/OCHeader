@class NSTimer;

@interface AWESearchAIGCFrequencyService : NSObject

@property (nonatomic) double interval;
@property (retain, nonatomic) NSTimer *throttleTimer;
@property (nonatomic) BOOL isThrottlingDisabled;
@property (retain, nonatomic) NSTimer *debounceTimer;
@property (copy, nonatomic) id /* block */ debounceCallbackBlock;

- (void)throttle:(id /* block */)a0;
- (void)debounce:(id /* block */)a0;
- (void)throttleTimerDidFire:(id)a0;
- (void)debounceTimerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0;
- (void)dealloc;
- (void)cancel;

@end
