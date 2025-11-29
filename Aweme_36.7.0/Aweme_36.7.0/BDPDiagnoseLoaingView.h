@class UIImageView, UIView, UILabel, BDPLoadingAnimationView;

@interface BDPDiagnoseLoaingView : UIView

@property (copy, nonatomic) id /* block */ retryBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *retryLabel;

- (void)updateLoadingStatus:(long long)a0;
- (id)initWithRetryBlock:(id /* block */)a0;
- (void)onRetryClicked;
- (void)setupSubViews;
- (void).cxx_destruct;

@end
