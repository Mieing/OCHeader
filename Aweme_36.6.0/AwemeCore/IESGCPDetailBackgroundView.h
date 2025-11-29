@class MASConstraint, NSString, IESGCPTitleBackgroundBlurredView, IESGCPDetailImageGradientView, IESGCPDetailBackgroundConfig, UIView, IESGCPDetailSkeletonView;

@interface IESGCPDetailBackgroundView : UIView <IESGCPDIContextSubscriber, IESGCPAudienceDetailScrollActions>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIView *fullScreenCoverView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *clickCloseView;
@property (retain, nonatomic) IESGCPDetailBackgroundConfig *config;
@property (retain, nonatomic) IESGCPDetailImageGradientView *miniGradientImageView;
@property (retain, nonatomic) IESGCPDetailImageGradientView *floatGradientImageView;
@property (retain, nonatomic) UIView *floatImageBackgroundView;
@property (retain, nonatomic) IESGCPDetailSkeletonView *skeletonView;
@property (nonatomic) BOOL useBackIcon;
@property (retain, nonatomic) MASConstraint *backgroundHeightMargin;
@property (retain, nonatomic) MASConstraint *floatImageTopMargin;
@property (nonatomic) BOOL currentIsFullScreen;
@property (retain, nonatomic) IESGCPTitleBackgroundBlurredView *titleBackgroundBlurredView;
@property (retain, nonatomic) MASConstraint *titleBlurredViewHeightConstraint;
@property (copy, nonatomic) id /* block */ closeButtonAlphaChange;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetWithConfig:(id)a0;
- (void)didSetGameCPDIContext;
- (BOOL)useHalfScreenConfig;
- (void)audienceDetailHeightDidChange:(double)a0;
- (void)audienceDetailParentScrollOffsetDidChange:(double)a0 stickyProgress:(double)a1;
- (void)hiddenSkeletonView:(BOOL)a0;
- (void)detailViewFullScreenModeChange:(BOOL)a0;
- (void)hiddenCloseButton:(BOOL)a0;
- (id)initWithIfUseBackIcon:(BOOL)a0;
- (void)resetContentViewCornerWithConfig:(id)a0;
- (void)resetContentViewWith:(id)a0;
- (void)resetMiniImageViewWith:(id)a0;
- (void)resetFloatImageViewWith:(id)a0;
- (double)transformSkeletonHeightFromDetailViewHeight:(double)a0;
- (double)transformSkeletonBgHeightFromDetailViewHeight:(double)a0;
- (double)transformSkeletonGameInfoSpacingFromDetailViewHeight:(double)a0;
- (double)transformBackgroundHeightFromDetailViewHeight:(double)a0;
- (void)updateGradientImageViewAlphaFrom:(double)a0;
- (void)setupGradientImageView:(id)a0 gradientImageConfig:(id)a1;
- (double)detailViewPullProgressFrom:(double)a0;
- (void).cxx_destruct;
- (void)setup;

@end
