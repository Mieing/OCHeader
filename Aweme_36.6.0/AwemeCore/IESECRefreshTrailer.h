@class UIView;

@interface IESECRefreshTrailer : MJRefreshComponent

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double lastRightDelta;
@property (copy, nonatomic) id /* block */ contentOffsetDidChangeBlock;

+ (id)trailerWithRefreshingBlock:(id /* block */)a0;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (double)happenOffsetX;
- (double)widthForContentBreakView;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
