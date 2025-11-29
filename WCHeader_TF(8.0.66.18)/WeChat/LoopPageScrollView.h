@class NSString, MMUIScrollView, UIPanGestureRecognizer;
@protocol LoopPageScrollViewDataSourceDelegate;

@interface LoopPageScrollView : MMUIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMUIScrollView *m_scrollView;
@property (weak, nonatomic) id<LoopPageScrollViewDataSourceDelegate> m_delegate;
@property (nonatomic) int m_curPageNum;
@property (retain, nonatomic) UIPanGestureRecognizer *m_panGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getPanGestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withDelegate:(id)a1;
- (void)layoutSubviews;
- (void)reloadData;
- (int)getRealPageNum:(int)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)handleSingleTap:(id)a0;
- (void)changeToNextPage;
- (void)changeToLastPage;
- (void)changeToNPage:(unsigned int)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
