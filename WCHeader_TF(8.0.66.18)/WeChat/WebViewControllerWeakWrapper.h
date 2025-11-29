@class MMWebViewController;

@interface WebViewControllerWeakWrapper : NSObject

@property (weak, nonatomic) MMWebViewController *viewController;

+ (id)wrapperWithViewController:(id)a0;

- (void).cxx_destruct;

@end
