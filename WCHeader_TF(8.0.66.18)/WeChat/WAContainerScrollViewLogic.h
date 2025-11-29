@class WAWebViewController, NSString, UIScrollView, WAScrollViewAnimView, WAJSCoreService;
@protocol UIScrollViewDelegate;

@interface WAContainerScrollViewLogic : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<UIScrollViewDelegate> realDelegate;
@property (retain, nonatomic) WAScrollViewAnimView *animView;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL customDecelerate;
@property (weak, nonatomic) WAJSCoreService *service;
@property (weak, nonatomic) WAWebViewController *webview;
@property (nonatomic) unsigned int scrollViewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startAnimateWithDuration:(double)a0 delay:(double)a1 usingSpringWithDamping:(double)a2 initialSpringVelocity:(double)a3 options:(unsigned long long)a4 startPoint:(struct CGPoint { double x0; double x1; })a5 endPoint:(struct CGPoint { double x0; double x1; })a6;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)notifyEvent:(id)a0 params:(id)a1;
- (id)commonParams:(id)a0;
- (id)paramsWith:(id)a0 extraParams:(id)a1;
- (void)makeAnimView;
- (void)updateAnimView;
- (void)deleAnimView;
- (void).cxx_destruct;

@end
