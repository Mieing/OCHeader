@class UILabel, NSString, UIImageView, LOTAnimationView, AWEGradientView, UIView, BDImageView;

@interface AWEGrouponC2FeedLiveCardResouceContainerView : UIView <AWEGrouponC2FeedLiveCardContainerProtocol>

@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) UIImageView *textImageView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIView *bottomPanelView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) AWEGradientView *liveIconBgGradientView;
@property (retain, nonatomic) UIImageView *textImgBackView;
@property (retain, nonatomic) UIView *liveInfoView;
@property (retain, nonatomic) BDImageView *liveIconImageView;
@property (retain, nonatomic) UILabel *liveTextLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *liveContentView;
@property (retain, nonatomic) UILabel *liveInfoLabel;
@property (retain, nonatomic) BDImageView *userIconImageView;
@property (retain, nonatomic) UILabel *userTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findLottieJSONPath:(id)a0;
+ (double)bottomViewHeight;
+ (double)cardHighWithWidth:(double)a0 model:(id)a1;
+ (void)downloadLottieResourceWithCompletion:(id /* block */)a0;
+ (id)lottieSourceLocalPath;
+ (id)lottieSourceURL;
+ (double)coverTopMargin;
+ (double)coverMargin;
+ (double)bottomOverCoverHeight;
+ (double)coverBottomMargin;
+ (struct CGPoint { double x0; double x1; })backGradientStartPoint;
+ (struct CGPoint { double x0; double x1; })backGradientEndPoint;
+ (id)backGradientColors;
+ (id)backGradientLocations;
+ (id)tagIvBackGroundUrl;
+ (id)resourceSettings;
+ (id)tagIvUrl;
+ (id)backgroundLogoUrl;
+ (void)prefetchImgResource;
+ (id)backgroundImageUrl;
+ (void)initialize;
+ (unsigned long long)cardStyle;

- (void)setUpVCWithModel:(id)a0;
- (void)updateContainerViewInfoWithModel:(id)a0;
- (void)updateLiveContentView:(id)a0;
- (void)didPreviewStreamStartPlay;
- (void)didRemoveLiveContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverFrame;
- (void)setupBottomGradientView;
- (void)setupLayout_default;
- (void)setupLayout_style1;
- (void)setupLayout_style2;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (void)setupUI;
- (void)setupLayout;

@end
