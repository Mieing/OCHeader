@class NSString, ContainerView, MMWebViewController, FlutterMethodChannel;
@protocol UIScrollViewDelegate;

@interface WCAdPlatformViewCommonWebView : WCAdPlatformViewBase <MMWebViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) ContainerView *containerView;
@property (retain, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *canvasKey;
@property (retain, nonatomic) NSString *componentId;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) BOOL bgTransparent;
@property (nonatomic) BOOL scrolledFlag;
@property (weak, nonatomic) id<UIScrollViewDelegate> webViewScrollViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (id)view;
- (void)dealloc;
- (void)onWebViewDidStartLoad:(id)a0;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
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
- (void)handleJsEvent:(id)a0 params:(id)a1 needCallback:(BOOL)a2 result:(id /* block */)a3;
- (void).cxx_destruct;

@end
