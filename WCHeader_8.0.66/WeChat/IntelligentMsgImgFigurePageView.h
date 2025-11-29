@class UIPageControl, NSString, NSArray, MMScrollView, NSMutableArray;
@protocol IntelligentMsgImgFigurePageViewDelegate;

@interface IntelligentMsgImgFigurePageView : MMUIView <UIScrollViewDelegate, scrollViewDelegate> {
    unsigned long long m_tempCurrentPages;
    BOOL m_isChangePage;
    BOOL m_isVisable;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageController;
    unsigned long long m_iCount;
    unsigned long long m_iRow;
    unsigned long long m_iCol;
    unsigned long long m_iPage;
    NSMutableArray *m_arrAttachmentButton;
    NSArray *m_arrFaceClusterMessageItem;
}

@property (weak, nonatomic) id<IntelligentMsgImgFigurePageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)pointInScrollView:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEmoticonViewFrameAtIndex:(unsigned int)a0 forViewWidth:(double)a1;
- (void)updateMsgImgFigurePageView:(id)a0;
- (void)scrollViewToPage:(unsigned long long)a0 animated:(BOOL)a1;
- (id)createButton;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfCols;
- (BOOL)isOnePage;
- (void)onPageControllerChangePage:(id)a0;
- (void)onClickMsgImgButton:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
