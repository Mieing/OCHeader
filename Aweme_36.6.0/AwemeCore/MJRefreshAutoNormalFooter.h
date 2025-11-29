@class UIActivityIndicatorView;

@interface MJRefreshAutoNormalFooter : MJRefreshAutoStateFooter

@property (weak, nonatomic) UIActivityIndicatorView *loadingView;
@property (nonatomic) long long activityIndicatorViewStyle;

- (void)placeSubviews;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
