@class CAGradientLayer, NSArray, AWEPOILivePurchaseAtmosphereConfig, AWEPOILivePurchaseAtmosphereViewModel, UIView, UILabel, BDImageView;

@interface AWEPOILivePurchaseAtmosphereView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *itemViews;
@property (weak, nonatomic) UILabel *numLabel;
@property (retain, nonatomic) UIView *nextStateBackgroundView;
@property (retain, nonatomic) BDImageView *nextStateBackImageView;
@property (retain, nonatomic) BDImageView *nextStateShineImageView;
@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereConfig *config;
@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereViewModel *viewModel;
@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereViewModel *waitViewModel;
@property (nonatomic) long long animationState;
@property (nonatomic) double startWebpTimeInterval;

+ (id)explainAtmosphereView;
+ (id)shelfAtmosphereView;
+ (id)createAtmosphereViewWithConfig:(id)a0;

- (void)layoutSubviews;
- (void)clearAtmosphereView;
- (void)updateViewsWithViewModel:(id)a0;
- (void)allViewPrepareForReuse;
- (float)configWebpPlayDuration;
- (void)doWaitingAnimation;
- (long long)currAnimationState;
- (void)setCurrAnimationState:(long long)a0;
- (void)sendAnimatedActionToMessageCenter;
- (void)updateGradientLayer;
- (void)shineAnimationCompletion:(id /* block */)a0;
- (void)enterAnimationCompletion:(id /* block */)a0;
- (void)doNextStateTransformAnimationCompletion:(id /* block */)a0;
- (void)doNextStateShineAnimationWillShow:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareForAnimation;
- (void)leaveAnimationCompletion:(id /* block */)a0;
- (void)shelfResetReuseCellUI;
- (void)enterAnimationDelay:(double)a0 completion:(id /* block */)a1;
- (void)nextStatePrepareForReuse;
- (void)enterNoAnimation;
- (void)updateNumberShineAnimationCompletion:(id /* block */)a0;
- (void)updateXNumber:(BOOL)a0;
- (void)doNextStateAnimationWillShow:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateGradientLayerWithViewModel:(id)a0;
- (void)setupItemViewsWithViewModel:(id)a0;
- (void)applyRadius:(double)a0 atCorners:(unsigned long long)a1 forLayer:(id)a2;
- (id)getTextAttributedStringWithTextItem:(id)a0;
- (id)getXNumberAttributedStringWithNumberItem:(id)a0;
- (void)layoutItemViews;
- (void)contentViewPrepareForReuse;
- (void)leaveAnimationDelay:(double)a0 completion:(id /* block */)a1;
- (void)markWebpStartPlay;
- (void)clearWebpAnimationState;
- (void).cxx_destruct;
- (void)setupViews;
- (void)setupItemViews;

@end
