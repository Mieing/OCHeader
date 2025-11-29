@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMEmoticonLoadingView : UIView

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) UILabel *retryTitleLabel;
@property (retain, nonatomic) UILabel *retrySubtitleLabel;
@property (retain, nonatomic) UIButton *retryButton;

- (void)showRetryView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
