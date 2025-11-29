@class IESLiveAnimatedImageView, UILabel, NSTimer;

@interface IESLivePlaybackPictureScaleGuideView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) NSTimer *timer;

- (void)showGuideWithDuration:(double)a0;
- (void)layoutViews;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;

@end
