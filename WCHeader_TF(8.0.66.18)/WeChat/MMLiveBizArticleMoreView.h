@class MMUILabel, MMUIActivityIndicatorView;

@interface MMLiveBizArticleMoreView : UIView

@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) long long loadStatus;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadTipsLabel;
- (void)loadActivityIndicatorView;
- (void)layoutSubviews;
- (void)updateTipsLabelWithLoadStatus:(long long)a0;
- (void)updateActivityIndicatorViewWithLoadStatus:(long long)a0;
- (void).cxx_destruct;

@end
