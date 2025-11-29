@class UIView, AWEVideoPlayerController, NSString, CAShapeLayer, UIButton, DUXLoadingCircleView, AWEUGPushGuideModel, UIImageView, AWEUGSelectivePushGuideHeaderView, UILabel;

@interface AWEUGNewUnselectivePushGuideView : AWEUGPushGuideBaseView <AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) AWEUGPushGuideModel *guideModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEUGSelectivePushGuideHeaderView *fakePushView;
@property (retain, nonatomic) AWEVideoPlayerController *videoPlayController;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *shadowBgView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingCircleView;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)preparedToPlayForURL:(id)a0;
- (id)aAWEPadBizUIAdapter;
- (id)initWithGuideViewModel:(id)a0;
- (void)configSubViews;
- (void)configTextView;
- (void)configPushView;
- (void)configVideoView;
- (void)p_showInView:(id)a0 duration:(double)a1;
- (void)hideWithDuration:(double)a0;
- (void)didClickCancelButton:(id)a0;
- (id)intentiveLabelPathWithLabel:(id)a0;
- (void)didClickAgreeButton:(id)a0;
- (void)overlayViewTapAction:(id)a0;
- (void)realShow;
- (BOOL)useVideoGuide;
- (void).cxx_destruct;
- (double)bottomMargin;
- (void)layoutSubviews;
- (double)viewHeight;

@end
