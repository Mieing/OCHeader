@class UIView;

@interface IESECMallFullScreenRefreshHeaderView : MJRefreshHeader

@property (retain, nonatomic) UIView *refreshView;

+ (id)headerWithRefreshingBlock:(id /* block */)a0;

- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)layoutSubviews;

@end
