@class MMWebViewController, FlutterMethodChannel, NSString;
@protocol UIScrollViewDelegate;

@interface LiteAppWebviewViewImpl : MMUIView <MMWebViewDelegate, UIScrollViewDelegate> {
    BOOL _autoHeight;
    BOOL _autoWidth;
}

@property (retain, nonatomic) MMWebViewController *webViewController;
@property (weak, nonatomic) id<UIScrollViewDelegate> webViewScrollViewDelegate;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL isWebviewFinishLoad;
@property (nonatomic) BOOL isAtTop;
@property (nonatomic) BOOL isAtBottom;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } superSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (void)safeAreaInsetsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)dealloc;
- (void)goToURL:(id)a0;
- (void)onWebViewDidStartLoad:(id)a0;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (void)onLoadProgressChanged:(id)a0 progress:(double)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void).cxx_destruct;

@end
