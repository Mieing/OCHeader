@class WKWebView;

@interface MMWebviewWrapper : NSObject

@property (weak, nonatomic) WKWebView *weakWebview;
@property (nonatomic) BOOL isRequesting;

- (void).cxx_destruct;

@end
