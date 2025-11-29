@class CADisplayLink;

@interface ScrollAnimation : NSObject {
    double _duration;
    double _runTime;
    double _startOffset;
    double _destinationOffset;
    CADisplayLink *_timer;
    void /* function */ *_timingFunction;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ scrollBlock;

- (void)animatedScroll;
- (void)scrollToDestination;
- (void)scrollToOffset:(double)a0 startOffset:(double)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)cancelTimer;
- (id)init;
- (void)dealloc;

@end
