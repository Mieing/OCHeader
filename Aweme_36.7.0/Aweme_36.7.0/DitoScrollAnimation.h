@class UIScrollView, CADisplayLink;

@interface DitoScrollAnimation : NSObject {
    double _startTime;
    double _duration;
    double _runTime;
    struct CGPoint { double x; double y; } _startOffset;
    struct CGPoint { double x; double y; } _destinationOffset;
    CADisplayLink *_timer;
    void /* function */ *_timingFunction;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ completion;

- (void)animatedScroll;
- (id)initWithScrollView:(id)a0 timingFunction:(void /* function */ *)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;

@end
