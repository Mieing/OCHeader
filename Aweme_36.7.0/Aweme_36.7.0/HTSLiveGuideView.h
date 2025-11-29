@class LOTAnimationView, UILabel;

@interface HTSLiveGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *upGuideLabel;
@property (nonatomic) BOOL isAnimationPlaying;
@property (retain, nonatomic) id observer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationName:(id)a1 animationSize:(struct CGSize { double x0; double x1; })a2 title:(id)a3;
- (void)_addObserve;
- (void)updateAnimationConstraints;
- (void)initUIWithAnimationName:(id)a0 animationSize:(struct CGSize { double x0; double x1; })a1 title:(id)a2;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (void)reset;
- (void)dealloc;

@end
