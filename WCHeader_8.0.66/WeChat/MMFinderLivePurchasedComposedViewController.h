@class NSString, MMFinderLivePurchasedComposedViewControllerOpenParams, MMLiteAppViewController, WCFinderNavTabTitleView;

@interface MMFinderLivePurchasedComposedViewController : WCFinderNavTabViewController <UIGestureRecognizerDelegate, MMUICollectionViewGestureRecognizerDelegate>

@property (retain, nonatomic) MMFinderLivePurchasedComposedViewControllerOpenParams *openParam;
@property (retain, nonatomic) WCFinderNavTabTitleView *customTitleView;
@property (retain, nonatomic) MMLiteAppViewController *paidMicViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParam:(id)a0;
- (void)viewDidLoad;
- (void)installTitleView;
- (id)titleView;
- (double)collectionViewTopMargin;
- (BOOL)shouldRelayoutCollectionView;
- (void)viewDidLayoutSubviews;
- (id)definePages;
- (void)loadPaidMicLiteAppViewController;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (BOOL)gestureRecognizerShouldBeginForCollectionView:(id)a0 gestureRecognizer:(id)a1 ignoreReturnAndCallSuper:(BOOL *)a2;
- (void).cxx_destruct;

@end
