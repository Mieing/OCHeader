@class NSString, MMFinderLivePurchasedComposedViewControllerOpenParams;

@interface WCFinderPurchasedViewController : WCFinderNavTabViewController <MMUICollectionViewGestureRecognizerDelegate>

@property (retain, nonatomic) MMFinderLivePurchasedComposedViewControllerOpenParams *composedOpenParam;
@property (nonatomic) BOOL shouldHideMemberTab;
@property (nonatomic) BOOL shouldHidePaidCollectionTab;
@property (nonatomic) BOOL shouldHideLiveTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPurchasedComposedOpenParams:(id)a0;
- (void)viewDidLoad;
- (id)definePages;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (BOOL)gestureRecognizerShouldBeginForCollectionView:(id)a0 gestureRecognizer:(id)a1 ignoreReturnAndCallSuper:(BOOL *)a2;
- (void).cxx_destruct;

@end
