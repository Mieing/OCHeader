@class LOTAnimationView, UILabel, UIView;

@interface AWESearchScanCircleSearchUserGuide : NSObject

@property (nonatomic) double guideTimes;
@property (retain, nonatomic) UIView *clearView;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) LOTAnimationView *guideLottieView;
@property (retain, nonatomic) UILabel *guideTextLabel;
@property (nonatomic) BOOL isCircleGuide;
@property (nonatomic) BOOL hasHideGuide;
@property (nonatomic) long long pageType;
@property (nonatomic) BOOL disableBackColor;

- (BOOL)canShowGuide;
- (void)hideGuideIfNeed;
- (void)resetGuideView;
- (BOOL)timeCheckEnableShowGuide:(long long)a0;
- (void)showGuideOnView:(id)a0 guideHeight:(double)a1 pageType:(long long)a2;
- (id)getGuideText;
- (id)getGuideTimesKey;
- (void)addCurrentGuideTimes;
- (id)setupCircleLottieView;
- (id)setupClickLottieView;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)handleTap:(id)a0;

@end
