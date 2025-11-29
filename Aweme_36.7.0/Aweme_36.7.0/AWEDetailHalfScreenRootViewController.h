@class DUXPartialSheet, NSDictionary, UIView, UIViewController;
@protocol AWEDetailViewControllerProtocol;

@interface AWEDetailHalfScreenRootViewController : UIViewController <AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) UIView *dismissView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) DUXPartialSheet *sheet;
@property (weak, nonatomic) UIViewController<AWEDetailViewControllerProtocol> *detailViewController;
@property (nonatomic) double ratio;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)VCIsBeingDismissed;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissVC;

@end
