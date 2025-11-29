@class NSString, WCFinderEmptyTipsView, MMWebViewController, WCFinderStreamProfileDragBarView;

@interface WCFinderHalfScreenWebVC : MMUIHalfScreenViewController <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCFinderHalfScreenProtocol, WCFinderStreamProfileDragBarViewDelegate>

@property (retain, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) double heightRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)updateWithUrl:(id)a0;
- (void)initWebView;
- (void)updateFinderUI;
- (void)onWebViewDidReceiveResponse:(id)a0 Response:(id)a1;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (void)dragBarViewWillBegin:(id)a0;
- (void)dragBarViewDidEnd:(id)a0 slideToClose:(BOOL)a1;
- (double)dragBarViewExpandMinHeight:(id)a0;
- (double)dragBarViewExpandMaxHeight:(id)a0;
- (void).cxx_destruct;

@end
