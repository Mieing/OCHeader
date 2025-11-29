@class NSString, MJTemplateFullScreenControlViewParams, WCPlayerShareableButton, WCPlayerConfigFullScreenProgressBar;
@protocol MJTemplateFullScreenControlViewDelegate;

@interface MJTemplateFullScreenControlView : UIView <FullScreenVideoProgressBarDelegate>

@property (retain, nonatomic) MJTemplateFullScreenControlViewParams *params;
@property (retain, nonatomic) WCPlayerShareableButton *shareButton;
@property (retain, nonatomic) WCPlayerConfigFullScreenProgressBar *progressBar;
@property (weak, nonatomic) id<MJTemplateFullScreenControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)initView;
- (void)initShareButtonIfNeeded;
- (void)initProgressBarIfNeeded;
- (void)layoutSubviews;
- (void)onClickShareButton:(id)a0;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)a0;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentPlaybackTime;
- (void)onSetPlayBackRate:(double)a0;
- (void).cxx_destruct;

@end
