@class UIColor, MMUILabel, WXVideoSlider;
@protocol WCCanvasMusicProgressBarDelegate;

@interface WCCanvasMusicProgressBar : MMUIView

@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIColor *fgColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) WXVideoSlider *slider;
@property (nonatomic) BOOL isSliderScrubbing;
@property (weak, nonatomic) id<WCCanvasMusicProgressBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelColor:(id)a1 fgColor:(id)a2 bgColor:(id)a3;
- (void)initViews;
- (id)createTimeLabel;
- (void)layoutSubviews;
- (void)updateDuration:(double)a0;
- (void)updateCurrentTime:(double)a0;
- (void)innerUpdateCurrentTime:(double)a0;
- (id)genTimeText:(double)a0;
- (void)onSliderChange;
- (void)onSliderScrubBegin;
- (void)onSliderScrubEnd;
- (BOOL)canSlider;
- (void).cxx_destruct;

@end
