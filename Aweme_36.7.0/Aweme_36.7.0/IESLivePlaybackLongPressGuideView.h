@class LOTAnimationView, UILabel, NSTimer;

@interface IESLivePlaybackLongPressGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *longPressGuideView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) NSTimer *timer;

- (id)initWithDIContext:(id)a0;
- (void)showGuideWithDuration:(double)a0;
- (void)layoutViews;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
