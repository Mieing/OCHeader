@class NSString, UIImageView, ACCEditSingleVideoProgressView, UIView, ACCEditSingleVideoPlayControlConfig;
@protocol ACCEditPlayControlViewDelegate;

@interface ACCEditSingleVideoPlayControlView : UIView <ACCEditSingleVideoProgressViewListener>

@property (retain, nonatomic) ACCEditSingleVideoPlayControlConfig *config;
@property (nonatomic) BOOL isFullScreenStyle;
@property (retain, nonatomic) UIImageView *playPauseButton;
@property (retain, nonatomic) ACCEditSingleVideoProgressView *progressView;
@property (retain, nonatomic) UIView *pauseView;
@property (retain, nonatomic) UIImageView *pauseImage;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double playPauseButtonBottomOffset;
@property (weak, nonatomic) id<ACCEditPlayControlViewDelegate> delegate;
@property (nonatomic) BOOL enableHDRRendering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (BOOL)isHandleGesture;
- (void)setMinTime:(double)a0 maxTime:(double)a1;
- (void)setPlayTime:(double)a0 animated:(BOOL)a1;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeChanged:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)playPauseButtonDidClick:(id)a0;
- (void)configPauseView;
- (void)switchToPlayStatus;
- (void)switchToPauseStatus;
- (void)updatePlayButtonBottomOffset:(double)a0;
- (void)adaptForSecondaryPage;
- (void)disableRespondToPanGesture:(BOOL)a0;
- (void)configFullScreenModeWithContainer:(id)a0;
- (void)bringPauseViewToFront;
- (void)progressSliderPanGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
