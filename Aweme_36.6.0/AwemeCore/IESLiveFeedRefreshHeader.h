@class NSDictionary, UIView;
@protocol IESLiveRefreshView;

@interface IESLiveFeedRefreshHeader : MJRefreshHeader

@property (copy, nonatomic) id /* block */ paramsRefreshingBlock;
@property (copy, nonatomic) NSDictionary *refreshingParams;
@property (retain, nonatomic) UIView<IESLiveRefreshView> *loading;
@property (retain, nonatomic) NSDictionary *params;

+ (id)headerWithRefreshingParamsBlock:(id /* block */)a0;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
