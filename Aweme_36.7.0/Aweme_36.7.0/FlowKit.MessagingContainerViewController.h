@class NSString;

@interface FlowKit.MessagingContainerViewController : FlowCommon.FlowBaseViewController <UICollectionViewDelegate, UIScrollViewDelegate, FlowUIKit.FlowNavChildViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ firstViewController;
    void /* unknown type, empty encoding */ userGuideAnimators;
    void /* unknown type, empty encoding */ isPlayingUserGuide;
    void /* unknown type, empty encoding */ shouldContinueAnimating;
    void /* unknown type, empty encoding */ trackedMap;
    void /* unknown type, empty encoding */ selectMode;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ collectionViewLayout;
    void /* unknown type, empty encoding */ loadMoreView;
    void /* unknown type, empty encoding */ isScrolling;
    void /* unknown type, empty encoding */ voiceInputViewModel;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideArrowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ oldCell;
    void /* unknown type, empty encoding */ newCell;
    void /* unknown type, empty encoding */ disableChangeScrollEnabled;
    void /* unknown type, empty encoding */ lastScrollEnabled;
    void /* unknown type, empty encoding */ hidesBottomBarWhenPushedValue;
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _messageAdapater;
    void /* unknown type, empty encoding */ _debugService;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ didStopScrollingWorkItem;
}

@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)flow_trackParametersWith:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)shouldNavBeginWithGestureRecognizer:(id)a0;
- (void)onCloseButtonClicked;
- (void)handlePanWithGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
