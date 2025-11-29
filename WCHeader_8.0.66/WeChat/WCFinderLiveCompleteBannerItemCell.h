@class MMWebImageView, MMRollableLabelViewConfig, MMRollableLabelView;

@interface WCFinderLiveCompleteBannerItemCell : WCFinderLiveBannerBaseCell

@property (retain, nonatomic) MMRollableLabelView *masterTitleTextView;
@property (retain, nonatomic) MMRollableLabelView *subTitleTextView;
@property (retain, nonatomic) MMWebImageView *rightImageView;
@property (retain, nonatomic) MMWebImageView *subTitleIconImageView;
@property (retain, nonatomic) MMRollableLabelViewConfig *masterTitleConfig;
@property (retain, nonatomic) MMRollableLabelViewConfig *subTitleConfig;

+ (struct CGSize { double x0; double x1; })bannerSizeByInfo:(id)a0;

- (void)prepareForReuse;
- (void)startScrollAnimation:(BOOL)a0;
- (void)stopScrollAnimation;
- (void)delayStartScrollAnimation;
- (void)setupUIIfNeeded;
- (void)setBannerVM:(id)a0;
- (double)getRollingSpeedPerSecond:(double)a0 maxWidth:(double)a1;
- (double)maxMasterTitleWidth;
- (double)maxSubTitleWidth;
- (BOOL)showDeleteAnimationWithCompleteAction:(id /* block */)a0;
- (BOOL)updateCurrentSubTitle;
- (void)forceStopPagAnimation;
- (void).cxx_destruct;

@end
