@class ScrollAnimation;

@interface HalfContainerAnimationHelper : NSObject

@property (retain, nonatomic) ScrollAnimation *scrollAnimator;

- (void)updateOffset:(double)a0 startOffset:(double)a1 duration:(double)a2 completion:(id /* block */)a3 scrollBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
