@class UIButton, UIImageView, UIImage, UIView, UILabel, BDPLoadingAnimationView;
@protocol BDPFeedBackLoadingViewDelegate;

@interface BDPFeedBackLoadingView : UIView

@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UIImageView *loadImageView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingAnimationView;
@property (retain, nonatomic) UILabel *loadLabel;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImage *loadImage;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<BDPFeedBackLoadingViewDelegate> feedBackDelegate;

- (void)createView:(long long)a0;
- (void)netError;
- (void)retryClick;
- (id)initWithLoadType:(unsigned long long)a0 width:(double)a1 height:(double)a2;
- (void)errorView:(long long)a0;
- (void)closebuttonClick;
- (void).cxx_destruct;
- (void)loadError;
- (void)loadingView;

@end
