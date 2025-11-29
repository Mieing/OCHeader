@class UIView, IESLivePullDisableScrollView, IESLiveMyLiveViewModel, IESLiveMyLiveUserCardView, HTSEventForwardingView, IESLiveMyLiveMultiTabView, NSString, UICollectionView, IESLiveMyLiveVistorEntryView, IESLiveMyLiveUserCardFoldedView;

@interface IESLiveMyLiveCard : IESLiveUserCard <UIScrollViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, IESLiveScrollViewGestureDelegate, IESLiveMyLiveTabPageViewCellDelegate, IESLiveUserCardViewProtocol>

@property (retain, nonatomic) IESLiveMyLiveViewModel *viewModel;
@property (retain, nonatomic) UIView *borderContainer;
@property (retain, nonatomic) HTSEventForwardingView *topFixedContainer;
@property (retain, nonatomic) IESLiveMyLiveVistorEntryView *visitorEntryView;
@property (retain, nonatomic) IESLivePullDisableScrollView *scrollView;
@property (retain, nonatomic) IESLiveMyLiveUserCardView *userCardUiContainer;
@property (retain, nonatomic) IESLiveMyLiveUserCardFoldedView *foldedUserCardView;
@property (retain, nonatomic) UIView *multiTabContainer;
@property (retain, nonatomic) IESLiveMyLiveMultiTabView *multiTabView;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (nonatomic) BOOL didSelectedDefaultTab;
@property (retain, nonatomic) UIView *fallbackTipView;
@property (nonatomic) BOOL multiTabViewDidScrollToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scrollAreaHeight;
- (void)setupBackgroundContainer;
- (BOOL)scrollGestureShouldDisable:(id)a0;
- (BOOL)scrollView:(id)a0 shouldRecognizeSimultaneouslyWithPanGestureRecognizer:(id)a1;
- (void)setupBorderDecoration;
- (void)setupFoldedUserCardUI;
- (void)setupTopFixedContainer;
- (double)hoverHeaderHeight;
- (void)setupOperateViews;
- (void)setupMultitabViews;
- (void)setupCornersNew;
- (void)setupParallaxViewIfNeeded;
- (void)goVistors;
- (void)setupFallbackTipView;
- (BOOL)pageViewCellPanScrollShouldEnable:(id)a0;
- (void)usercardOpenFinished;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBackgroundFrame;
- (void)setupUsercardHierarchy;
- (void)diffusionAnimationFinished;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didMoveToSuperview;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupScrollView;

@end
