@class UIImageView, UIView;

@interface ADFeedGoodLoadStatusView : UIView

@property (retain, nonatomic) UIView *loadContentView;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *errorContentView;
@property (retain, nonatomic) UIView *errorView;
@property (copy, nonatomic) id /* block */ retryFetchBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)retryFecth;
- (void)close;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)showErrorView;

@end
