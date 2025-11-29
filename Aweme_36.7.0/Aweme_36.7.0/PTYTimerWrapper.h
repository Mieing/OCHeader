@class NSTimer;

@interface PTYTimerWrapper : NSObject

@property (weak, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL cancelled;

- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0 delay:(int)a1;

@end
