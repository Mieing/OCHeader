@class NSString, UIView, GXAnimationModel;
@protocol GXLottieAniamtionProtocal;

@interface GXViewNode : GXBaseNode {
    BOOL _isLottie;
    BOOL _isTrigger;
    BOOL _userEnable;
}

@property (copy, nonatomic) NSString *lottieName;
@property (retain, nonatomic) GXAnimationModel *animationModel;
@property (retain, nonatomic) UIView<GXLottieAniamtionProtocal> *animationView;

- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)bindAnimation:(id)a0;
- (void)updateAnimationViewFrame;
- (void)setupGaiaXAnimation:(id)a0;
- (void)lottieAnimation:(id)a0;
- (void)propAnimation:(id)a0;
- (void)animationDidFinished:(id)a0;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end
