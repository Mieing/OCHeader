@class UIColor, UIImageView, BDSCSliderView, UILabel, UIView, UIFontDescriptor;

@interface BDSCHudProgressView : UIView

@property (retain, nonatomic) BDSCSliderView *progressView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIFontDescriptor *fontDescriptor;
@property (retain, nonatomic) UIImageView *forwardView;
@property (copy, nonatomic) UIColor *currentTimeTextColor;
@property (copy, nonatomic) UIColor *totalTimeTextColor;
@property (nonatomic) double textSize;
@property (nonatomic) BOOL banProgressView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isForward;
@property (nonatomic) double totalTime;

- (double)cacheProgress;
- (void)_buildViewHierarchy;
- (id)_timeStringForProgress:(double)a0;
- (void)setCacheProgress:(double)a0 animated:(BOOL)a1;
- (id)lableFont;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (double)progress;
- (void)contentViewLayout;
- (void)layoutSubviews;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
