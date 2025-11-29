@class NSString, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEVideoUniformEffectSideslipPanelGudieView : ACCPassThroughView

@property (retain, nonatomic) UIView *firstGuideHintView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *hintAnimationView;
@property (copy, nonatomic) NSString *lottieFilePath;
@property (nonatomic) BOOL firstGuideShowing;
@property (copy, nonatomic) id /* block */ guideDismissComletion;

+ (BOOL)shouldShowSideslipPanelFirstGuide;

- (void)removeGuideView;
- (void)loadLottieFileWithCompletion:(id /* block */)a0;
- (id)localLottieFolderPath;
- (void)showGuideViewWithDismissComletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
