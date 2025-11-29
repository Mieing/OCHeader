@class BDImageView, NSString, BDASplashMedalViewModel, UILabel, UIView, IESLiveVideoGiftController;

@interface BDASplashMedalView : BDASplashComplianceBaseSlideView <BDASplashEggsDelegate, IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) BDASplashMedalViewModel *viewModel;
@property (retain, nonatomic) BDImageView *eggsImageView;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaVideoController;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *subGuideLabel;
@property (retain, nonatomic) UIView *gradientView;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)addGesture;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)basePanGestureSuccess:(id)a0;
- (BOOL)whetherPostponeSplashView;
- (void)updateGestureState:(long long)a0;
- (void)renderFail;
- (void)eggsViewDidAppearWithParams:(id)a0;
- (void)eggsViewDidDisappearWithParams:(id)a0;
- (void)eggsViewBreakWithParams:(id)a0;
- (id)getGuideLabelText:(id)a0 fontSize:(double)a1 textColorAlpha:(double)a2;
- (void)showWithAlphaVideo:(id)a0;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
