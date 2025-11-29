@class NSString;
@protocol AWEAwemePlayInteractionCommerceInnerDelegate;

@interface AWEPlayInteractionExposedCommerceController : AWEPlayInteractionNewBaseController <AWEAwemePlayInteractionExposedCommonCommerceDelegate> {
    id<AWEAwemePlayInteractionCommerceInnerDelegate> _commerceDelegate;
}

@property (copy, nonatomic) NSString *componentsPriorityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)popUpAnchorView;
- (void)showRedpacketAnimation;
- (void)animateLeftBottomByXOffset:(double)a0 yOffset:(double)a1 alpha:(double)a2;
- (void)showDouPlusEntryGuideAnimation;
- (void)p_prepareForDisplay;
- (void)promptCardAppearWithOffset:(double)a0;
- (void)promptCardDisAppear;
- (BOOL)checkToShowCardForCurrentPriorityComponent:(unsigned long long)a0;
- (void)animateLeftBottomByWidth:(double)a0 height:(double)a1 xOffset:(double)a2 yOffset:(double)a3 alpha:(double)a4 duration:(double)a5 exceptElements:(id)a6 completionBlock:(id /* block */)a7;
- (void)executeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 alpha:(double)a1 exceptElements:(id)a2;
- (void)updateComponentsPriorityType:(id)a0 isReCalculate:(BOOL)a1;
- (void)viewDidAppear;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInteracting;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
