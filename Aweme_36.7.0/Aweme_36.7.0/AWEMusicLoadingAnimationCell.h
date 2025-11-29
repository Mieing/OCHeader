@class UILabel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEMusicLoadingAnimationCell : UICollectionViewCell

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *loadingAnimation;
@property (retain, nonatomic) UILabel *loadingTipLbl;
@property (nonatomic) BOOL animationFillToContent;

- (id)loadingAnimationName;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
