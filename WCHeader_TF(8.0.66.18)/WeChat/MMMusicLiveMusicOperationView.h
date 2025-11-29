@class MMMVSafeSlider, MMTimer, MMMusicInfo, NSString, MMUILabel;
@protocol MMMusicLiveMusicOperationViewDelegate;

@interface MMMusicLiveMusicOperationView : UIView <IMusicPlayerExt, UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (retain, nonatomic) MMMVSafeSlider *slider;
@property (retain, nonatomic) MMTimer *sliderTimer;
@property (retain, nonatomic) MMUILabel *playedTimeLabel;
@property (retain, nonatomic) MMUILabel *dividerLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (nonatomic) double musicTimeInSecondPerPx;
@property (nonatomic) double lastSeekTime;
@property (nonatomic) BOOL isSeekNotSuccRefreshUIFlag;
@property (nonatomic) BOOL isSeekNotSuccPlayAuto;
@property (weak, nonatomic) id<MMMusicLiveMusicOperationViewDelegate> delegate;
@property (nonatomic) BOOL progressHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicInfo:(id)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;
- (void)initViews;
- (void)layoutSubviews;
- (void)onPlayMusicBtnClicked;
- (void)updateCurrentPlayTimeInSeconds:(double)a0 totalDuration:(double)a1;
- (void)setProgress:(double)a0;
- (unsigned int)setProgressEnd;
- (double)getMusicTimeInSecondPerPx;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)updateProgress;
- (void)onNeedUpdatePlayedTime;
- (void)onNeedUpdatePlayedTimeWhenSetProgressEnd;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)actionTapSlider:(id)a0;
- (void)updateSliderThumbImage;
- (void)trySeekMusic:(double)a0 playAuto:(BOOL)a1;
- (BOOL)canSeek:(unsigned long long)a0;
- (void).cxx_destruct;

@end
