@class UIImageView, UILabel, AWELiveShelfNetErrorRetryButton;

@interface AWELiveShelfNetErrorView : UIView

@property (retain, nonatomic) UIImageView *netErrorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELiveShelfNetErrorRetryButton *retryButton;

- (void)configErrorText:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
