@class BDASplashComplianceViewHolder, NSDictionary;

@interface BDASplashComplianceBaseView : UIView

@property (weak, nonatomic) BDASplashComplianceViewHolder *viewHolder;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long viewState;
@property (nonatomic) long long gestureState;
@property (nonatomic) BOOL isSyncRenderFailed;

- (void)updateGuideViewState:(BOOL)a0;
- (id)getSpecificControlsForAnimation;
- (void)applyGreyThemeWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)baseClickGesture:(id)a0;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)baseOtherClickGesture:(id)a0;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)splashJump;
- (id)getInteractionView;
- (BOOL)whetherPostponeSplashView;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)show;

@end
