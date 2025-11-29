@class ACCAnimatedButton;
@protocol ACCEditBeautyVideoControlBarDelegate;

@interface ACCEditBeautyVideoControlBar : UIView

@property (retain, nonatomic) ACCAnimatedButton *playButton;
@property (weak, nonatomic) id<ACCEditBeautyVideoControlBarDelegate> delegete;

- (void)updatePlayButtonStatusWithIsPlaying:(BOOL)a0;
- (void)playButtonDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
