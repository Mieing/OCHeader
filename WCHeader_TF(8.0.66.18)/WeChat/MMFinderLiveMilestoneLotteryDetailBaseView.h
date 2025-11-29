@class MMFinderLiveSpringCardContainerView, NSString, UIImageView, MMFinderLiveMilestoneLotteryViewModel, MMWebImageView, UIView, MMUIButton;

@interface MMFinderLiveMilestoneLotteryDetailBaseView : UIView <MMFinderLiveSpringCardContainerViewDelegate, MMWebImageViewDelegate>

@property (readonly, nonatomic) double cardViewWidthIpad;
@property (readonly, nonatomic) double cardViewHeightIpad;
@property (nonatomic) double cardViewWidthPortrait;
@property (nonatomic) double cardViewWidthLandScape;
@property (nonatomic) double cardViewHeightPortrait;
@property (nonatomic) double cardViewHeightLandScape;
@property (retain, nonatomic) UIView *bgTapView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *backgroundTopRightDecorationImageView;
@property (retain, nonatomic) UIImageView *backgroundBottomLeftDecorationImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebImageView *bgDecorationImageView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMFinderLiveSpringCardContainerView *containerView;
@property (retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm;
@property (readonly, nonatomic) double cardViewWidth;
@property (readonly, nonatomic) double cardViewHeight;
@property (nonatomic) double lotteryUIAdaptedPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)initCommonUI;
- (void)layoutSubviews;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (id)closeButtonColor;
- (void)showInView:(id)a0 aniamted:(BOOL)a1;
- (void)hideAniamted:(BOOL)a0;
- (void)updateTopDecorationImageUrl:(id)a0;
- (void)reloadBGColorForSpringFestival;
- (void)closeView;
- (void)onBgTapViewTapped:(id)a0;
- (void)cardContainerViewRequestDismissCurrentCard:(id)a0;
- (double)getCurrentSizeRatio;
- (double)getCardViewHeightLandscapeRatioForIPhone;
- (double)liveAdaptedValue:(double)a0;
- (double)getLotteryUIAdaptedPercent;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
