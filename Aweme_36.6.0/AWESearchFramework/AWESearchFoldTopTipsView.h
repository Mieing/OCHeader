@class UIButton, NSString, UIImageView, UILabel, UIView, YYLabel;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchFoldTopTipsView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *finishTipLabel;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *loadingView;
@property (retain, nonatomic) YYLabel *tipsLabel;
@property (retain, nonatomic) YYLabel *trailLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) NSString *loadingTip;
@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (void)themeChange;
- (void)updateTips:(id)a0;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)clickButtonAction;
- (void)updateLogoImage;
- (void)updateSubviewsHiddenWithIsLoading:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;

@end
