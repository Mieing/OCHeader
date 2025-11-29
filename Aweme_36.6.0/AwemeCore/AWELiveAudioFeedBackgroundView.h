@class UIImageView, AWELiveAudioFeedViewModel, UIView;

@interface AWELiveAudioFeedBackgroundView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *blackMask;
@property (retain, nonatomic) AWELiveAudioFeedViewModel *viewModel;

- (void)bindViewModel:(id)a0;
- (void)displayBackgroundImage:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
