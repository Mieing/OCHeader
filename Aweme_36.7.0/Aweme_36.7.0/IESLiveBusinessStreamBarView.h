@class HTSLiveBusinessConfigure, IESLiveGCDTimer, IESLiveAnimatedImageView, UILabel, UIButton;

@interface IESLiveBusinessStreamBarView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundView;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UIButton *arrowRightBtn;
@property (retain, nonatomic) UILabel *jumpPromptLabel;
@property (retain, nonatomic) HTSLiveBusinessConfigure *configure;
@property (retain, nonatomic) IESLiveGCDTimer *timeStampTimer;
@property (copy, nonatomic) id /* block */ allAnimationFinished;

- (id)p_getTrackParams;
- (void)closeBar;
- (void)startTimerWithDuration:(double)a0;
- (id)initWithBusinessConfigure:(id)a0 context:(id)a1;
- (void)restartAnimated;
- (void)layoutPortraitSubviews;
- (void)layoutLandscapeSubviews;
- (void)p_openAdSchema;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)dealloc;
- (void)show;
- (void)setupViews;

@end
