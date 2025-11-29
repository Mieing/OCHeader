@class WAMinimizeFloatingAuidoOnlyView, SightIconView, MMWebImageView, UIView;

@interface WABGAudioMinimizationPlayerView : UIView

@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) UIView *failureTipsView;
@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) WAMinimizeFloatingAuidoOnlyView *audioOnlyView;
@property (nonatomic) long long state;
@property (nonatomic) long long playType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImage:(id)a0;
- (void)setDefaultImage;
- (id)getPlayerView;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
