@class BDImageView;

@interface AWEECMallSegmentedItemLottieView : AWEECMallSegmentedItemView

@property (retain, nonatomic) BDImageView *animationImageView;

- (void)refreshView;
- (void)willDisPlay;
- (void)tryReleaseResControl;
- (void)handleLottie;
- (void)downgradeImageOrText:(id)a0 item:(id)a1;
- (void)handleRedDot;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didEndDisplaying;

@end
