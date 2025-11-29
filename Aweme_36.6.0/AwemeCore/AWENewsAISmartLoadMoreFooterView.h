@class UIView, BDImageView;

@interface AWENewsAISmartLoadMoreFooterView : MJRefreshAutoFooter

@property (retain, nonatomic) BDImageView *loadMoreFooterView;
@property (retain, nonatomic) UIView *noMoreDataFooterView;

- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)p_configUI;
- (void)p_makeConstraint;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
