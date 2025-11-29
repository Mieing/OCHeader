@class NSTimer;

@interface AWENearbyCountDownLabel : UILabel

@property (nonatomic) int remainSeconds;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ countDownBlk;
@property (nonatomic) int toTimestamp;

- (void)applicationBecomeActive;
- (id)initWithTimestamp:(int)a0 countDownBlk:(id /* block */)a1;
- (id)countDownString:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)start;
- (void)addObserver;
- (void)dealloc;

@end
