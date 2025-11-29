@class NSString, LOTAnimationView, AWELandscapePageContext, UILabel, BDImageView;

@interface AWELandScapeGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *longPressLottieView;
@property (retain, nonatomic) LOTAnimationView *guideLottieView;
@property (retain, nonatomic) BDImageView *animationImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *guideNewLabel;
@property (nonatomic) long long longPressLoopTimes;
@property (nonatomic) BOOL isShowingGuideLottie;
@property (nonatomic) BOOL isShowingNewGuide;
@property (copy, nonatomic) NSString *lottieName;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (nonatomic) double leftOffset;
@property (nonatomic) double topOffset;

- (id)initWithPageContext:(id)a0;
- (void)hideGuideIfNeed;
- (void)showGuideOnView:(id)a0 type:(long long)a1;
- (void)showOnView:(id)a0 animationView:(id)a1 completion:(id /* block */)a2;
- (void)resetLongPressGuide;
- (void)setupLongPressLottieView;
- (void)setLongPressLottie;
- (void)showGuideOnView:(id)a0 text:(id)a1 lottieName:(id)a2;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
