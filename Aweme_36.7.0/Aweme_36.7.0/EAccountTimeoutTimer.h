@class NSTimer;
@protocol EAccountTimeoutDelegate;

@interface EAccountTimeoutTimer : NSObject

@property (retain, nonatomic) NSTimer *toTimer;
@property (copy, nonatomic) id /* block */ toblock;
@property (weak, nonatomic) id<EAccountTimeoutDelegate> delegate;
@property (nonatomic) double tInterval;

- (void)startTick;
- (void)startTickWithBlock:(id /* block */)a0;
- (void)toTimerBlockTick;
- (void)toTimerTick;
- (void).cxx_destruct;
- (void)dealloc;

@end
