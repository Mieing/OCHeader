@class NSString, BDPNovelContentPageContext, UIScrollView, NSMutableArray, BDPNovelBack;

@interface BDPNovelVerticalScrollController : BDPNovelContainerController <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDPNovelBack *nativeBackBtn;
@property (nonatomic) double lastContentOffset;
@property (retain, nonatomic) NSMutableArray *contentVCs;
@property (nonatomic) BOOL shouldHandleScrollViewChange;
@property (nonatomic) BOOL canSendOnScrollStart;
@property (nonatomic) BOOL shouldSendOnScrollEnd;
@property (nonatomic) BOOL scrollEnded;
@property (weak, nonatomic) BDPNovelContentPageContext *firstPageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVCInScreen:(id)a0;
- (void)scrollDidEnd;
- (void)initScrollView;
- (long long)pageTurnMode;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (BOOL)isFreeWordReachEnd;
- (id)getCurrentContents;
- (void)reformPositionFromStart;
- (void)reformPositionFromBottom;
- (void)renderFinished:(id)a0;
- (void)forceBlockScroll:(BOOL)a0 vc:(id)a1;
- (void)updateNewViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupInitPageView;
- (void)addVCToView:(id)a0 atIndex:(unsigned long long)a1;
- (id)getFirstDisplayedVCInScreen;
- (void)sendScrollStartEvent;
- (void)recycleViewControllersNotInScreen;
- (BOOL)canGetNewVCByScroll:(id)a0;
- (id)getNewContentVC:(id)a0;
- (void)reformatVCPosition;
- (void)tryIfNeedSendViewChangeEvent:(double)a0;
- (void)recoverAllVCPosition;
- (BOOL)scrollToTargetVCIfNeeded;
- (id)getLargestDisplayedVCInScreen;
- (double)getVCDisplayedHeightInScreen:(id)a0;
- (void)removeVCFromView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
