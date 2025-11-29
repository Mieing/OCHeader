@class NSString;

@interface AWEAdWebViewModalViewController : UIViewController <AWEPageSheetPresentationPhaseTransitionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)initialPhaseForPageSheetPresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)a0 frameOfPresentedViewForPhase:(long long)a1;
- (id)init;

@end
