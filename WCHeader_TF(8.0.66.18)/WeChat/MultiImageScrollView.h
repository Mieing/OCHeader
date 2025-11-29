@class NSString, MMUIViewController, NSMutableDictionary;
@protocol MultiImageScrollViewDelegate;

@interface MultiImageScrollView : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate> {
    NSMutableDictionary *dicVisiblePageIndex;
    BOOL m_bDragAnimating;
}

@property (nonatomic) BOOL isTilingPage;
@property (nonatomic) BOOL isMovingToNextPage;
@property (weak, nonatomic) MMUIViewController *m_viewController;
@property (weak, nonatomic) id<MultiImageScrollViewDelegate> m_delegate;
@property (nonatomic) int m_iNumberOfPages;
@property (nonatomic) int m_iPreviousPage;
@property (nonatomic) int m_iCurrentPage;
@property (nonatomic) BOOL m_bFromPicker;
@property (nonatomic) BOOL m_isFromWebview;
@property (nonatomic) BOOL m_needUseWindowFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)onSingleTap:(id)a0;
- (void)onDoubleTap:(id)a0;
- (void)OnLongPressBegin:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)ImageScrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)ImageScrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)ImageScrollViewWillBeginDragging:(id)a0;
- (void)ImageScrollViewDidEndDecelerating:(id)a0;
- (void)handleLivePhotoLongPress:(long long)a0;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)a0;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tilePages;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPagingScrollView:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPageAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })contentSizeForPagingScrollView;
- (struct CGPoint { double x0; double x1; })contentOffsetForPagingScrollView;
- (void)adjustToNewSize;
- (void)adjustToMinimumScale;
- (id)imageAtPage:(unsigned long long)a0;
- (id)viewAtPage:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)imageCount;
- (void)updateTitleView;
- (void)updatePageCount:(unsigned int)a0;
- (void)setPage:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void)changeToPageAtIndex:(unsigned long long)a0;
- (void)changeToNextPageWithCompletion:(id /* block */)a0;
- (void)updatePhotoatIndex:(unsigned long long)a0;
- (id)getPhotoatIndex:(unsigned long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)reloadDataWithPageCount:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
