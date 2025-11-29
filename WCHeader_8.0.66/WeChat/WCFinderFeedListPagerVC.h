@class WCFinderCyclePagerView, WCFinderColumnCellViewModel, WCFinderFeedListView, WCFinderCyclePagerViewLayoutParams, NSString, WCFinderSwipPageControl, WCFinderCyclePagerFooterView;
@protocol WCFinderFeedListPagerVCDelegate;

@interface WCFinderFeedListPagerVC : MMUIViewController <WCFinderCyclePagerViewDelegate, WCFinderCyclePagerViewDataSource, WCFinderFeedListPagerCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol, WCFinderFeedListTransitionHorizontalGestureBehavior>

@property (retain, nonatomic) WCFinderCyclePagerView *cyclePagerView;
@property (retain, nonatomic) WCFinderSwipPageControl *pageControl;
@property (retain, nonatomic) WCFinderCyclePagerViewLayoutParams *layoutParams;
@property (retain, nonatomic) WCFinderCyclePagerFooterView *footerView;
@property (nonatomic) BOOL hadLightShock;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderColumnCellViewModel *vm;
@property (weak, nonatomic) WCFinderFeedListView *curFeedListView;
@property (weak, nonatomic) id<WCFinderFeedListPagerVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getListenHalfAnimView;
- (unsigned long long)listenHalfScreenOption;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)updateLandSpace:(struct CGSize { double x0; double x1; })a0;
- (BOOL)supportRotate;
- (id)initWithScene:(int)a0 vm:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)updateFooterType;
- (id)getCurrentMediaViewCell;
- (void)onBack;
- (void)updatePageControl;
- (long long)numberOfItemsInPagerView:(id)a0;
- (id)identifiersOfItemsInPagerView:(id)a0;
- (id)pagerView:(id)a0 cellForItemAtIndex:(long long)a1;
- (id)layoutForPagerView:(id)a0;
- (id)getCurFooterView;
- (unsigned long long)getCurPagerFooterViewType;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (void)curFeedHalfScreenIsShow:(BOOL)a0;
- (void)pagerView:(id)a0 didScrollFromIndex:(long long)a1 toIndex:(long long)a2;
- (void)pagerView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)pagerView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)pagerView:(id)a0 updateReusableView:(id)a1;
- (void)pagerViewDidScroll:(id)a0;
- (BOOL)beyondBufferArea:(id)a0 bufferOffset:(double)a1;
- (void)pagerViewDidEndDecelerating:(id)a0;
- (void)onColumnDataChange:(id)a0;
- (double)trailingOffset;
- (void).cxx_destruct;

@end
