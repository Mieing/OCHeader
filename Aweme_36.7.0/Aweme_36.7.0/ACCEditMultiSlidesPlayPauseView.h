@class NSString, UIImageView, DUXBaseImageView, UIView;
@protocol ACCEditPlayControlViewDelegate;

@interface ACCEditMultiSlidesPlayPauseView : UIView

@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *playPauseButton;
@property (retain, nonatomic) UIImageView *pauseImage;
@property (retain, nonatomic) UIView *pauseView;
@property (nonatomic) double pauseButtonRight;
@property (nonatomic) double pauseButtonBottom;
@property (nonatomic) double pauseButtonWH;
@property (copy, nonatomic) NSString *pauseButtonPauseIcon;
@property (copy, nonatomic) NSString *pauseButtonPlayIcon;
@property (retain, nonatomic) UIView *pauseButtonBGView;
@property (weak, nonatomic) id<ACCEditPlayControlViewDelegate> delegate;

- (void)playPauseButtonDidClick:(id)a0;
- (void)configPauseView;
- (void)switchToPlayStatus;
- (void)switchToPauseStatus;
- (void).cxx_destruct;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
