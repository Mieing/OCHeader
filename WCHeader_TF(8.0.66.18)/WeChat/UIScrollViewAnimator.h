@class UIScrollView, CADisplayLink;

@interface UIScrollViewAnimator : NSObject

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x; double y; } fromContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } toContentOffset;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double animationStartTime;

- (id)initWithScrollView:(id)a0;
- (void)animateToContentOffset:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)updateScrollViewContentOffset:(id)a0;
- (double)timingFuncEaseOut:(double)a0;
- (void).cxx_destruct;

@end
