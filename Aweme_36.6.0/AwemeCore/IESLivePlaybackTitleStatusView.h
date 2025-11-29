@class IESLivePlaybackTitleStatusModel, UIStackView, UIImageView, UIView, HTSLiveAmazingBackgroundView, UILabel;

@interface IESLivePlaybackTitleStatusView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIStackView *portraitContentView;
@property (retain, nonatomic) IESLivePlaybackTitleStatusModel *model;
@property (retain, nonatomic) UIStackView *statusContentView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *statusBackgroundView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *landscapeTitleLabel;
@property (retain, nonatomic) UIImageView *titleArrowView;
@property (retain, nonatomic) UIView *tempContainerView;
@property (nonatomic) BOOL didPopWebView;
@property (retain, nonatomic) UILabel *carouselLabel;
@property (nonatomic) BOOL didCarousel;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)stopTitleCarousel;
- (void)carouselAnimation;
- (void)startTitleCarousel;
- (void)configViewWith:(id)a0;
- (void)screenStyleUpdate:(BOOL)a0;
- (void)configStatusBackgroundCGColors:(id)a0;
- (void).cxx_destruct;
- (void)orientationChanged:(long long)a0;
- (id)init;
- (id)viewType;
- (void)setup;

@end
