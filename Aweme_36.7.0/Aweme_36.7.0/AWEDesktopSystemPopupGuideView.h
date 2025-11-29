@class UILabel, UIButton, UIImageView, NSString, DUXLoadingParticleView, UIView, AWEVideoPlayerController;
@protocol AWEDesktopSystemPopupGuideViewActionDelegate;

@interface AWEDesktopSystemPopupGuideView : UIView <AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (nonatomic) unsigned long long guideStyleType;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEVideoPlayerController *videoPlayController;
@property (nonatomic) double contentViewX;
@property (nonatomic) double contentViewY;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) double contentViewHeight;
@property (nonatomic) double contentViewAreaHeight;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *desktopButton;
@property (retain, nonatomic) UIImageView *loadingBackground;
@property (weak, nonatomic) id<AWEDesktopSystemPopupGuideViewActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;

- (void)preparedToPlayForURL:(id)a0;
- (id)aAWEBrandColorAdapter;
- (void)leftButtonTap:(id)a0;
- (void)rightButtonTap:(id)a0;
- (void)updateUIWithGuideStyle:(unsigned long long)a0;
- (void)setupTopImageStyle;
- (void)setupBottomImageStyle;
- (void)setupVideoGuideViewStyle;
- (void)setupTopVideoGuideViewStyle;
- (void)setupMediumImageGuideViewStyle;
- (void)closeButtonTap:(id)a0;
- (void)desktopButtonTap:(id)a0;
- (void).cxx_destruct;

@end
