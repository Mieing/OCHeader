@class NSString, NSMutableSet;
@protocol PageScrollViewDataSource, PageScrollViewDelegate;

@interface PageScrollView : MMScrollView <WCImageScrollViewDelegate> {
    BOOL _reloading;
}

@property (nonatomic) BOOL supportOrientation;
@property (retain, nonatomic) NSMutableSet *recycledPages;
@property (retain, nonatomic) NSMutableSet *visiblePages;
@property (weak, nonatomic) id<PageScrollViewDataSource> pageDataSource;
@property (weak, nonatomic) id<PageScrollViewDelegate> pageDelegate;
@property (nonatomic) double m_padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tagSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getCurrentIndex;
- (unsigned long long)getItemsCount;
- (id)getViewForItem:(unsigned long long)a0;
- (id)imageViewModelForItem:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPageAtItem:(unsigned long long)a0;
- (BOOL)isDisplayingPageForItem:(unsigned long long)a0;
- (id)dequeueRecycledPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configPadding:(double)a0;
- (double)Padding;
- (void)onSingleTapWCImageScrollView;
- (void)onDoubleTapWCImageScrollView;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDidDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)foreceReloadData;
- (void)removeVisiblePageAtIndex:(unsigned long long)a0;
- (void)updatePageAtIndex:(unsigned long long)a0;
- (id)viewAtPageIndex:(unsigned long long)a0;
- (id)visiblePageAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
