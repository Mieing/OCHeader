@class LOTAnimationView, UILabel, AWEFeedLiveTabGuideAnimationConfig;

@interface AWEFeedLiveTabGuideAnimationView : UIView

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *titleGuideLabel;
@property (retain, nonatomic) AWEFeedLiveTabGuideAnimationConfig *config;
@property (nonatomic) BOOL isAnimationPlaying;
@property (nonatomic) unsigned long long animationCount;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)addObserve;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationConfig:(id)a1;
- (void)initGuideAnimation;
- (void)tappedAction;
- (void)setupAnimationViewWithName:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (void)dealloc;

@end
