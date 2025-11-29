@class NSString, AWEAdTaskContext, AWEAwemeModel, AWEBDARifleViewController, AWEPageSheetPresentationNavigationController;

@interface AWEAdLandingSurveyLynxViewController : UIViewController <AWEPageSheetPresentationObserving, AWEPageSheetPresentationPhaseTransitionDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, AWEBDARifleViewControllerLifeCycleProtocol, AWEAdLandingSurveyLynxViewController>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEBDARifleViewController *lynxViewController;
@property (weak, nonatomic) AWEPageSheetPresentationNavigationController *navigationContainer;
@property (nonatomic) BOOL finishLoadFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAdTaskContext *context;

+ (BOOL)openAdLandingSurveyLynxViewControllerWithContext:(id)a0 lynxSchema:(id)a1;

- (long long)initialPhaseForPageSheetPresentation:(id)a0;
- (void)pageSheetPresentationWillBegin:(id)a0;
- (BOOL)pageSheet:(id)a0 shouldDismissForReason:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)a0 frameOfPresentedViewForPhase:(long long)a1;
- (void)rifleViewControllerDidFinishLoad:(id)a0;
- (void)rifleViewController:(id)a0 loadFailedWithErrorInfo:(id)a1;
- (void)setUpLynxView;
- (void)closeLynxSurveyPannel;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
