@class MMWebViewController, NSString, NSObject;
@protocol MMWebViewDelegate;

@interface WCFinderWebviewDelegateObject : NSProxy <MMWebViewDelegate>

@property (weak, nonatomic) MMWebViewController *webviewController;
@property (weak, nonatomic) NSObject<MMWebViewDelegate> *delegate;
@property (weak, nonatomic) NSObject<MMWebViewDelegate> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithWebviewController:(id)a0 target:(id)a1;

- (void)dealloc;
- (void)restore;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)onWebViewPerformClose:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;

@end
