@class UIView, CADisplayLink;
@protocol BDXRefreshDelegate;

@interface BDXRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id<BDXRefreshDelegate> delegate;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) SEL releasedAction;
@property (nonatomic) double preReboundPercent;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)headerRebound;
- (void)withReleasedAction:(SEL)a0;
- (void).cxx_destruct;
- (void)prepare;

@end
