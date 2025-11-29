@class BUWebViewProgressView, NSString, CSJAdSlot, UISwipeGestureRecognizer, NSDictionary, CSJDislikeContext, CSJWKWebViewClient, CSJASlotContext, CSJWebViewControllerViewModel;

@interface CSJWebViewController : UIViewController <UIScrollViewDelegate, CSJWKWebViewClientResponseDelegate, UIViewControllerTransitioningDelegate>

@property (nonatomic) BOOL isLuban;
@property (copy, nonatomic) NSDictionary *luban_json;
@property (copy, nonatomic) id /* block */ loadLubanJsonFail;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (nonatomic) BOOL hasWebViewBeginDrag;
@property (nonatomic) BOOL hasNotifyForAnchor;
@property (nonatomic) struct BUWebViewClickStruct { struct CGPoint { double x; double y; } point; NSString *tag; } indexClick;
@property (nonatomic) struct CGPoint { double x; double y; } startScrollOffset;
@property (nonatomic) BOOL firstTimeClickWebview;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL fingerOnScreen;
@property (retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGestureRecognizer;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) BOOL isNavBarHidden;
@property (retain, nonatomic) BUWebViewProgressView *progressView;
@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic) BOOL needReportClick;
@property (retain, nonatomic) CSJWKWebViewClient *webView;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) id /* block */ CloseBlock;
@property (copy, nonatomic) NSDictionary *relatedMaterialMeta;
@property (copy, nonatomic) id /* block */ hasLoadLubanListPage;
@property (copy, nonatomic) id /* block */ webViewNotifyForAnchor;
@property (nonatomic) double videoViewHeight;
@property (nonatomic) BOOL isFromClick;
@property (weak, nonatomic) CSJASlotContext *context;
@property (retain, nonatomic) CSJWebViewControllerViewModel *webViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideCloseButton;
- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3 landingPageType:(unsigned long long)a4 isFromClick:(BOOL)a5;
- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3 isNativeExpress:(BOOL)a4 pageType:(unsigned long long)a5;
- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3;
- (void)responseView:(id)a0 hitTest:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)rightSwipeGestureRecognizerAction:(id)a0;
- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3 landingPageType:(unsigned long long)a4;
- (void)bu_loadRequest:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showCloseButton;

@end
