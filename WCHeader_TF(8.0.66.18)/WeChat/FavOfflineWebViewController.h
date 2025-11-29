@class NSData, NSString, NSURL, UILongPressGestureRecognizer, MMScrollActionSheet, FavWebCacheScriptMessageHandler, NSDictionary, WCActionSheet, WKWebView;

@interface FavOfflineWebViewController : FavBaseDetailViewController <MMScrollActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WKURLSchemeHandler, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate> {
    MMScrollActionSheet *m_scrollActionSheet;
    NSDictionary *m_mimeTypeDic;
    WKWebView *m_webView;
    NSURL *m_targetUrl;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    BOOL m_bIsDraggingScroll;
    WCActionSheet *m_actionSheet;
    NSData *m_savingData;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (void)viewDidLoad;
- (BOOL)useCustomNavibar;
- (id)navigationBarBackgroundColor;
- (void)enableLongPress;
- (void)onLongPressOnWebview:(id)a0;
- (void)initNavigationBar;
- (void)initWebView;
- (void)dealloc;
- (void)loadContent;
- (void)onAction:(id)a0;
- (id)AddNewActionSheetCell2Array:(id)a0 WithText:(id)a1 WithImage:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)addOfflineInfo;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)getImageInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageFrame:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (id)getWCUploadTask;
- (id)getFavForawrdViewController;
- (void)onFavTagEditBegin:(int)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)saveImgWithImageData:(id)a0;
- (void)addImgFavWithImageData:(id)a0;
- (void)sendMsgWithImageData:(id)a0;
- (void).cxx_destruct;

@end
