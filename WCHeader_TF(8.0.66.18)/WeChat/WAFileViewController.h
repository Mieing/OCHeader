@class NSString, WKWebView, UITapGestureRecognizer;
@protocol IWAFileViewService;

@interface WAFileViewController : MMUIViewController <UIScrollViewDelegate, WKNavigationDelegate, UIGestureRecognizerDelegate, WCActionSheetDelegate> {
    UITapGestureRecognizer *_singleTapRec;
    BOOL _bIsNaviBarHide;
}

@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) id<IWAFileViewService> fileViewServiceProxy;
@property (nonatomic) BOOL m_bIsEnableJs;
@property (nonatomic) BOOL m_bIsShowNavBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)onOperate:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setNaviBarHide:(BOOL)a0 animation:(BOOL)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)forwardMessage;
- (void)addToFavorites;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)onSingleTap:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;

@end
