@class NSString, WCAdConventionalHalfScreenCloseBarView, WCFinderEmptyTipsView, MMUIView, WCAdConventionalHalfScreenWebViewController, WCAdCardBtnInfo;
@protocol WCAdConventionalHalfScreenScrollViewDelegate;

@interface WCAdConventionalHalfScreenScrollView : UIScrollView <WCFinderEmptyTipsViewDelegate, MMWebViewDelegate, UIScrollViewDelegate, WCAdConventionalHalfScreenWebViewControllerDelegate>

@property (retain, nonatomic) WCAdCardBtnInfo *actionInfo;
@property (weak, nonatomic) id<WCAdConventionalHalfScreenScrollViewDelegate> halfScreenDelegate;
@property (retain, nonatomic) WCAdConventionalHalfScreenCloseBarView *closeBarView;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (nonatomic) double emptyAreaHeight;
@property (retain, nonatomic) MMUIView *scrollContentContainer;
@property (retain, nonatomic) WCAdConventionalHalfScreenWebViewController *webViewController;
@property (nonatomic) struct CGPoint { double x; double y; } beginDraggingOffset;
@property (nonatomic) BOOL isContentViewFullyVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutContentScrollViewSubviews:(BOOL)a0;
- (void)onScrollViewDidFullyAppear;
- (void)loadWebViewContent;
- (void)showLoadingTips;
- (void)hideLoadingTips;
- (void)showErrorTips;
- (void)updateEmptyTipsViewPosition;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (void)initialWebView;
- (id)appendParamsToUrl:(id)a0 andUpdateExtraInfo:(inout id)a1 withDataItem:(id)a2 notAppendParamsToActionLink:(BOOL)a3;
- (id)appendParamsToUrl:(id)a0 withAdvertiseInfo:(id)a1;
- (id)appendParamsToUrl:(id)a0 withAdvertiseInfo:(id)a1 notAppendParamsToActionLink:(BOOL)a2;
- (void)setWebViewContentScrollEnabled:(BOOL)a0;
- (BOOL)isContentContainerScrolledToTop;
- (void)setContentContainerScrollToTop;
- (void)setContentContainerScrollToMid:(BOOL)a0;
- (void)setContentContainerPinToTop;
- (BOOL)isContentContainerStickToBottom;
- (void)onConventionalHalfScreenWebViewUpdateTitle:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (long long)fetchScrollAreaForOffset:(double)a0 topLine:(double)a1 bottomLine:(double)a2;
- (long long)operateScrollAreaForArea:(long long)a0 increase:(BOOL)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)didScrollViewEndDecelerating;
- (void)onScrollViewCeilingTopWithPercent:(double)a0 animated:(BOOL)a1;
- (void)onScrollViewDidChangeVisibleHeight:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)onWebViewDidReceiveResponse:(id)a0 Response:(id)a1;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void).cxx_destruct;

@end
