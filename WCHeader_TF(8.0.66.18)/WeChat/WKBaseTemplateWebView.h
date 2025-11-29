@class UIScrollView, NSURLRequest, NSString;
@protocol YYWebViewDelegate;

@interface WKBaseTemplateWebView : YYWKWebView <YYWebViewInterface>

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

- (void)LoadRequest:(id)a0;

@end
