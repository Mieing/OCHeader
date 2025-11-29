@class UIImageView, NSMutableDictionary, UILabel;

@interface IESECOrderListRefreshTrailer : MJRefreshComponent

@property (nonatomic) long long lastRefreshCount;
@property (nonatomic) double lastRightDelta;
@property (nonatomic) double fastAnimationDuration;
@property (nonatomic) double slowAnimationDuration;
@property (copy, nonatomic) id /* block */ endRefreshingAnimationBeginAction;
@property (copy, nonatomic) id /* block */ willShowBlock;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (readonly, nonatomic) UILabel *stateLabel;

+ (id)trailerWithRefreshingBlock:(id /* block */)a0 willShowBlock:(id /* block */)a1;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (double)happenOffsetX;
- (double)widthForContentBreakView;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (id)init;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
