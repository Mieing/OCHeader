@class NSString, WKWebView, UIView, UIScrollView, NSObject;
@protocol BDPTCRenderDelegate;

@interface BDPTCEmbed : NSObject

@property (copy, nonatomic) NSString *embedId;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIView *nativeView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<BDPTCRenderDelegate> *delegate;
@property (nonatomic) BOOL autoResizeWithSuperView;
@property (nonatomic) BOOL needBecomeFirstResponderWhenRerender;
@property (nonatomic) BOOL needHookResponder;
@property (nonatomic) BOOL holdKeyboard;

- (id)initWithEmbedId:(id)a0;
- (id)initWithEmbedId:(id)a0 webview:(id)a1 scrollView:(id)a2 nativeView:(id)a3;
- (void)updateScrollView:(id)a0;
- (void).cxx_destruct;

@end
