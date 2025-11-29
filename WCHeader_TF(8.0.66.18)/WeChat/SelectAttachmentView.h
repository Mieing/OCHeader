@class UIPageControl, NSString, UIImageView, MMScrollView, NSMutableArray;
@protocol SelectAttachmentViewDelegate, SelectAttachmentViewDataSource;

@interface SelectAttachmentView : MMUIView <UIScrollViewDelegate, scrollViewDelegate> {
    MMScrollView *_scrollView;
    UIPageControl *_pageController;
    UIImageView *m_tipsView;
    BOOL bPageControlUsed;
    unsigned long long iCount;
    unsigned long long iRow;
    unsigned long long iCol;
    unsigned long long iPage;
    BOOL isLayout;
    NSMutableArray *m_arrAttachmentButton;
    unsigned long long m_tempCurrentPages;
    BOOL m_isChangePage;
    BOOL m_isVisable;
}

@property (nonatomic) unsigned long long lastPage;
@property (weak, nonatomic) id<SelectAttachmentViewDelegate> delegate;
@property (weak, nonatomic) id<SelectAttachmentViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (double)getContentMarginCurOri;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEmoticonViewFrameAtIndex:(unsigned int)a0 forViewWidth:(double)a1;
- (double)itemOffset;
- (void)layoutSubviews;
- (void)resetView;
- (void)resetVisible;
- (void)resetContainerViewOffset;
- (void)changeToInputToolWeAppNotShowPageWithWeAppIndex:(long long)a0;
- (void)scrollViewToPage:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onContentVisableChange;
- (void)onPageControllerChangePage:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setVoiceOverAccessibilityElements:(BOOL)a0;
- (id)nextAccessibilityElementForNextPage:(unsigned long long)a0 andLastPage:(unsigned long long)a1;
- (void).cxx_destruct;

@end
