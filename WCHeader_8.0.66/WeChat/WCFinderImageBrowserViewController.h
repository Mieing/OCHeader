@class NSString, NSArray, UICollectionView, WCFinderPageControl, UICollectionViewFlowLayout, UIView, UIImage;
@protocol WCFinderImageBrowserViewControllerDelegate;

@interface WCFinderImageBrowserViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderImageBrowserCellDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) WCFinderPageControl *pageCtrl;
@property (nonatomic) BOOL isRotating;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) unsigned long long pageInitialIndex;
@property (weak, nonatomic) id<WCFinderImageBrowserViewControllerDelegate> delegate;
@property (weak, nonatomic) UIImage *transitionImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionImageStartRect;
@property (nonatomic) long long transitionImageContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (id)initWithMediaList:(id)a0 pageIndex:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)setupSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewFrame;
- (void)layoutViews;
- (void)layoutOnSizeChanged;
- (void)onPageCtrlValueChange;
- (id)centerCell;
- (BOOL)DismissMyselfAnimated:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)imageBrowserCell:(id)a0 changeBackgrondColorAlpha:(double)a1;
- (void)imageBrowserCell:(id)a0 changePullingDownState:(BOOL)a1;
- (BOOL)imageBrowserCellIsRotating:(id)a0;
- (void)imageBrowserCellOnSingleTap:(id)a0;
- (void)imageBrowserCellPullingToDismiss:(id)a0;
- (BOOL)imageBrowserCellShouldStartPullingDown:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
