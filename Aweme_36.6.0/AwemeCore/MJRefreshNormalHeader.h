@class UIImageView, UIActivityIndicatorView;

@interface MJRefreshNormalHeader : MJRefreshStateHeader {
    UIImageView *_arrowView;
}

@property (weak, nonatomic) UIActivityIndicatorView *loadingView;
@property (readonly, weak, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long activityIndicatorViewStyle;

- (void)placeSubviews;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
