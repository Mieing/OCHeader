@class UIView, BDASplashComplianceSlideUpTipsView, BDASplashTapGestureRecognizer, CALayer, BDASplashComplianceButtonView, BDImageView, BDASplashPanGestureRecognizer, BDASplashStoreSlideButtonViewModel, UILabel;

@interface BDASplashStoreSlideButtonView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashStoreSlideButtonViewModel *viewModel;
@property (retain, nonatomic) UIView *squareView;
@property (retain, nonatomic) UIView *hierarchyView;
@property (retain, nonatomic) BDASplashComplianceSlideUpTipsView *tipsView;
@property (retain, nonatomic) UIView *tipsButtonView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CALayer *storeBorderLayer;
@property (retain, nonatomic) BDASplashComplianceButtonView *buttonView;
@property (retain, nonatomic) BDImageView *buttonBackgroundView;
@property (retain, nonatomic) BDImageView *storeImageView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *firstTitleLabel;
@property (retain, nonatomic) UILabel *secondTitleLabel;
@property (retain, nonatomic) UIView *flagshipView;
@property (retain, nonatomic) BDImageView *liveBorderView;
@property (retain, nonatomic) BDImageView *liveIconView;
@property (retain, nonatomic) UILabel *liveFirstTitleLabel;
@property (retain, nonatomic) UILabel *liveSecondTitleLabel;
@property (nonatomic) BOOL showLiveView;
@property (nonatomic) BOOL showSecondTitleLabel;
@property (nonatomic) BOOL showFlagshipView;
@property (nonatomic) BOOL outWindow;
@property (retain, nonatomic) BDASplashPanGestureRecognizer *panGesture;
@property (retain, nonatomic) BDASplashTapGestureRecognizer *clickGesture;
@property (retain, nonatomic) BDASplashTapGestureRecognizer *otherClickGesture;

- (void)addGesture;
- (id)getSpecificControlsForAnimation;
- (void)loadAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)updateLiveSubviewLayout;
- (void)loadReputationStoreView:(id)a0;
- (void)loadFlagshipStoreView:(id)a0;
- (void)updateStoreSubviewLayout;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
