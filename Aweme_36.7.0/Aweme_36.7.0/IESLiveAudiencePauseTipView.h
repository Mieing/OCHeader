@class LOTAnimationView, UILabel;

@interface IESLiveAudiencePauseTipView : UIView

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) double animationViewBottom;
@property (nonatomic) double animationViewWidth;
@property (nonatomic) double titlePadding;
@property (nonatomic) double subtitlePadding;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double subtitleFontSize;

- (void)updateTitleText:(id)a0;
- (id)initWithScene:(unsigned long long)a0 isFullScreen:(BOOL)a1;
- (void)configWithScene:(unsigned long long)a0 isFullScreen:(BOOL)a1;
- (void)updateSubtitleText:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;
- (void)setupViews;

@end
