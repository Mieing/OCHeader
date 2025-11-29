@class NSTimer;

@interface CepTimerWrapper : NSObject

@property (weak, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL cancelled;

- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0 delay:(double)a1;

@end
