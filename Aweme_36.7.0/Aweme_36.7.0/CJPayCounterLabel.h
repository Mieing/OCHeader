@class CADisplayLink;

@interface CJPayCounterLabel : UILabel

@property (retain, nonatomic) CADisplayLink *timer;
@property (nonatomic) double starNumber;
@property (nonatomic) double endNumber;
@property (nonatomic) double durationTime;
@property (nonatomic) double lastTime;
@property (nonatomic) double progressTime;
@property (copy, nonatomic) id /* block */ formatNumberBlock;

- (void)p_cleanTimer;
- (void)p_fromNumber:(double)a0 toNumber:(double)a1 duration:(double)a2 formatNumberBlock:(id /* block */)a3;
- (void)p_changeNumber;
- (double)p_computeNumber;
- (double)p_bufferFunctionEaseInOut:(double)a0;
- (void)cj_fromNumber:(double)a0 toNumber:(double)a1 duration:(double)a2 format:(id /* block */)a3;
- (void)cj_fromNumber:(double)a0 toNumber:(double)a1 duration:(double)a2 attributedFormat:(id /* block */)a3;
- (void).cxx_destruct;

@end
