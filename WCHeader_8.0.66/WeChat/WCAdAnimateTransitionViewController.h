@class WCDataItem, WCAdAnimateViewControllerAnimatedTransitioning, UIView;

@interface WCAdAnimateTransitionViewController : MMUIViewController <WCAdBreakFrameViewRelatedProtocol>

@property (nonatomic) long long gestureType;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) UIView *originView;
@property (retain, nonatomic) WCAdAnimateViewControllerAnimatedTransitioning *presentationAnimate;
@property (copy, nonatomic) id /* block */ animateCompletion;

- (id)initWithGestureType:(long long)a0 dataItem:(id)a1 originView:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissMyselfAndJump;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (void)configPresentationCustomWithViewController:(id)a0 animateCompletion:(id /* block */)a1;
- (BOOL)shouldDeleteBreakFrameViewWhileCellEndDisplaying;
- (void).cxx_destruct;

@end
