@class NSString, WKWebView, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESFalconNavigationDelegateProxy : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id navigationDelegateProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
