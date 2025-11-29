@class NSString, UIScrollView, NSMutableArray, NSURLRequest;
@protocol YYWebViewDelegate;

@interface WKWebSearchView : YYWKWebView <YYWebViewInterface>

@property (nonatomic) unsigned long long initTime;
@property (nonatomic) unsigned int enterReusablePoolTime;
@property (nonatomic) unsigned long long evaluateJSTimes;
@property (copy, nonatomic) NSString *loadURLString;
@property (nonatomic) BOOL performActionEnabled;
@property (nonatomic) unsigned long long bizType;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *keywordStack;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSString *subSessionId;
@property (nonatomic) BOOL forceDarkModeMark;
@property (copy, nonatomic) NSString *lastEvaluateJSString;
@property (weak, nonatomic) id<YYWebViewDelegate> wvDelegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSURLRequest *request;
@property (nonatomic) BOOL allowsBackForwardNavigationGestures;
@property (readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property (readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL disablePreviewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setKeyboardFocusEnabled:(BOOL)a0;
- (id)base64Decode:(id)a0;
- (void)setAllKeyboardFocus;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)LoadRequest:(id)a0;
- (void)configurationWillCreate:(id)a0;
- (void)evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;
- (void)webviewWillEnterPool;
- (void)webviewWillLeavePool;
- (unsigned long long)survivalTime;
- (unsigned long long)stayInReuablePoolTime;
- (id)uniqueID;
- (void).cxx_destruct;

@end
