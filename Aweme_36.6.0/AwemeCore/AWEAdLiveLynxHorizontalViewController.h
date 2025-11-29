@class NSString, UIView;
@protocol AWEBDARifleViewConfiguration, AWEBDARifleView;

@interface AWEAdLiveLynxHorizontalViewController : UIViewController <AWEPageSheetTransitionDelegate, AWEPageSheetPresentationPhaseTransitionDelegate>

@property (retain, nonatomic) UIView<AWEBDARifleView> *rifleView;
@property (retain, nonatomic) id<AWEBDARifleViewConfiguration> config;
@property (copy, nonatomic) NSString *scheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)initialPhaseForPageSheetPresentation:(id)a0;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)a0 frameOfPresentedViewForPhase:(long long)a1;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (id)initWithRifleView:(id)a0 scheme:(id)a1 config:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
