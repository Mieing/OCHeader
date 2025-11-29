@class AWETimorWebViewLoadingView, NSString, AWETimorWebViewHeightAdapterView, NSDictionary, AWETimorWebView;

@interface AWETimorWebViewController : BDPViewController <AWETimorWebViewLoadingViewDelegate, AWETimorWebViewDelegate, AWETimorWebViewHeightAdapterViewDelegate>

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) AWETimorWebView *webview;
@property (retain, nonatomic) AWETimorWebViewLoadingView *processView;
@property (retain, nonatomic) AWETimorWebViewHeightAdapterView *blankView;
@property (nonatomic) unsigned long long webviewState;
@property (retain, nonatomic) NSDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick;
- (void)retryDidClick;
- (void)commonWebView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)commonWebView:(id)a0 didFinishNavigation:(id)a1;
- (void)commonWebView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)initWithParam:(id)a0 URLString:(id)a1;
- (BOOL)createFolderIfNeed:(id)a0;
- (void)registerFeedBackMessageHandler;
- (void)updateNavigationBarConstraintFrame;
- (id)generateModelWithParam:(id)a0;
- (id)generateRandomFilePathWithExtension:(id)a0;
- (void)registerContextAPIName:(id)a0 isSynchronous:(BOOL)a1 isOnMainThread:(BOOL)a2 instance:(id)a3 type:(long long)a4 APIHandler:(id /* block */)a5;
- (void)reportALog:(id)a0;
- (void)updateNavigationBarHeight;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)navigationBarHidden;

@end
