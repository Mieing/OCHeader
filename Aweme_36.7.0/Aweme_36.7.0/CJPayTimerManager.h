@class NSTimer;

@interface CJPayTimerManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ timeOutBlock;

- (void)p_timeout;
- (BOOL)isTimerValid;
- (void)appendTimeoutBlock:(id /* block */)a0;
- (void)detoryTimer;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer:(double)a0;
- (void)createTimer:(double)a0;

@end
