@class NSString, UIViewController;

@interface AWEPlayInteractionPreviewableController : AWEPlayInteractionBaseController <AWEPreviewable>

@property (retain, nonatomic) UIViewController *previewingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewingViewControllerForView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didCommitViewController:(id)a0;
- (BOOL)p_isRepost;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
