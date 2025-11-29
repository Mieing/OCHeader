@class NSTimer;

@interface AWELoginTimeOutTimer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ timeOutBlock;

- (void)appDidEnterBackgroundNotification:(id)a0;
- (void)appDidBecomeActiveNotification:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)updateDuration:(double)a0;

@end
