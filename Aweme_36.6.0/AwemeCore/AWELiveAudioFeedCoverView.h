@class UIImageView, AWELiveAudioFeedViewModel;

@interface AWELiveAudioFeedCoverView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWELiveAudioFeedViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } coverOffset;

- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
