@class NSString, UIImageView, LOTAnimationView, IESECSlicePDPLottieConfig;

@interface IESECSlicePDPLottieView : IESECSliceXViewElementView

@property (retain, nonatomic) UIImageView *image;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) IESECSlicePDPLottieConfig *config;
@property (copy, nonatomic) NSString *staticImageURL;
@property (nonatomic) BOOL animating;

- (void)initConfig:(id)a0;
- (void)setupLottieView;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)animateLottie;
- (void)disAnimatedLottie;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
