@class NSString, NSArray, NSTimer, AWEBinding, UIScrollView, AWELeftSideBarModuleModel, DUXCarouselIndicator;
@protocol AWELeftSideBarBannerCollectionViewCellDelegate;

@interface AWELeftSideBarBannerCollectionViewCell : UICollectionViewCell <AWELeftSideBarIndentBannerCellDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) id<AWELeftSideBarBannerCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWELeftSideBarModuleModel *model;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEBinding *scrollViewBinding;
@property (retain, nonatomic) DUXCarouselIndicator *carouselIndicator;
@property (copy, nonatomic) NSArray *cells;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long realIndex;
@property (nonatomic) long long willShowIndex;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)realIndex:(long long)a0;
- (void)carouselToShow:(long long)a0;
- (void)scrollAutomtically;
- (void)leftSideBarIndentBannerCell:(id)a0 didClickCloseWithItemModel:(id)a1;
- (void)leftSideBarIndentBannerCell:(id)a0 itemModel:(id)a1 cellView:(id)a2;
- (void)scrollView:(id)a0 contentOffsetDidChange:(struct CGPoint { double x0; double x1; })a1;
- (void)p_handleWillResignActiveNotification;
- (void)p_handleDidBecomeActiveNotification;
- (void)p_resetScroll;
- (void)p_removeItemModeAtIndex:(unsigned long long)a0;
- (void)p_updateCurrentBusinessIDToIndex:(long long)a0;
- (void)p_didChangeShowCellForIndex:(long long)a0;
- (id)p_initLeftSideBarCellWithItemModel:(id)a0 withIndex:(long long)a1;
- (void)p_willChangeShowCellForIndex:(long long)a0;
- (void)updateDelegate:(id)a0 moduleModel:(id)a1;
- (void)removeItemAtIndexAnimated:(unsigned long long)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pauseTimer;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)didMoveToWindow;

@end
