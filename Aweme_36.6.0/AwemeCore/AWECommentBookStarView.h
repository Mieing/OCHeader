@class UIStackView, LOTAnimationView, UIImageView, NSDictionary;

@interface AWECommentBookStarView : UIView

@property (retain, nonatomic) UIStackView *starStackView;
@property (retain, nonatomic) LOTAnimationView *ratingAnimationView;
@property (retain, nonatomic) UIImageView *starImageFirstView;
@property (retain, nonatomic) UIImageView *starImageSecondView;
@property (retain, nonatomic) UIImageView *starImageThirdView;
@property (retain, nonatomic) UIImageView *starImageFouthView;
@property (retain, nonatomic) UIImageView *starImageFifthView;
@property (retain, nonatomic) LOTAnimationView *lottieView1;
@property (retain, nonatomic) LOTAnimationView *lottieView2;
@property (retain, nonatomic) LOTAnimationView *lottieView3;
@property (retain, nonatomic) LOTAnimationView *lottieView4;
@property (retain, nonatomic) LOTAnimationView *finalLottieView;
@property (nonatomic) float bookScore;
@property (retain, nonatomic) NSDictionary *singleDict;
@property (retain, nonatomic) NSDictionary *finalDict;

- (float)getBookScore;
- (void)setLottieViewPlayProgress:(float)a0;
- (void)starTappedFrist:(id)a0;
- (void)starTappedSecond:(id)a0;
- (void)starTappedThird:(id)a0;
- (void)starTappedFourth:(id)a0;
- (void)starFinalTapped:(id)a0;
- (id)configSingleLottie;
- (id)configTotalLottie;
- (void)changeBookScore:(float)a0;
- (void)disMissAllLottieView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)showImage;

@end
