@class NSString, MMUIViewController, NSMutableDictionary;
@protocol MsgImgFullScreenContainerDelegate;

@interface MsgImgFullScreenContainer : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate> {
    NSMutableDictionary *dicVisiblePageIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originImageRectInScreen;
    BOOL m_bIsTilingPage;
}

@property (weak, nonatomic) MMUIViewController *m_viewController;
@property (weak, nonatomic) id<MsgImgFullScreenContainerDelegate> m_delegate;
@property (nonatomic) int m_iNumberOfPages;
@property (nonatomic) int m_iCurrentPage;
@property (nonatomic) BOOL m_bFromPicker;
@property (nonatomic) BOOL forceDisableScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onSavedPhotosAlbum;
- (void)onSavedPhotosAlbum:(id /* block */)a0;
- (void)onOperate;
- (void)forwardMessage;
- (void)addToFavorites;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onSingleTap:(id)a0;
- (void)onDoubleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)OnLongPressBegin:(id)a0;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateShowWithOriginRectInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tilePages;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)a0;
- (id)getPageForIndex:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)ImageScrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)ImageScrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPagingScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPageAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })contentSizeForPagingScrollView;
- (struct CGPoint { double x0; double x1; })contentOffsetForPagingScrollView;
- (id)imageAtPage:(unsigned long long)a0;
- (id)viewAtPage:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)imageCount;
- (void)updatePageCount:(unsigned int)a0;
- (void)clearView;
- (void)setPage:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void)updatePhotoatIndex:(unsigned long long)a0;
- (id)getPhotoatIndex:(unsigned long long)a0;
- (void)transitionToNewSize;
- (void).cxx_destruct;

@end
