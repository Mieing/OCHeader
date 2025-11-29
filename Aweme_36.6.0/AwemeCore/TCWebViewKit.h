@class UIWindow, NSString, TCWebViewController, NSMutableArray;
@protocol TCWebViewKitDelegate;

@interface TCWebViewKit : NSObject <TCWebViewControllerDelegate> {
    BOOL _isStatusBarHidden;
    BOOL _isClosing;
}

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *keywindow;
@property (retain, nonatomic) NSMutableArray *windowsArray;
@property (retain, nonatomic) TCWebViewController *webViewController;
@property (copy, nonatomic) NSString *requestUrl;
@property (copy, nonatomic) NSString *webTitle;
@property (weak, nonatomic) id<TCWebViewKitDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickClose;
- (void)loadReqURL:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (void)openWithUrl:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (void)webViewController:(id)a0 didCloseWithLastError:(id)a1;
- (BOOL)webViewController:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (unsigned long long)supportedInterfaceOrientationsWithWebVC:(id)a0;
- (BOOL)shouldAutorotateWithWebVC:(id)a0;
- (void)webViewController:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webViewController:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcFrameByOrientation:(int)a0;
- (void)MoveWindowIntoFrame;
- (void)onClickBarButton:(id)a0;
- (id)createNavigationBarButton:(id)a0 bindingJS:(id)a1;
- (void)MoveWindowOutOfFrame:(BOOL)a0;
- (void)MoveOtherWindowIntoFrame;
- (void)animationFinished:(id)a0 finished:(BOOL)a1 context:(void *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectOrientationIndependent;
- (id)initWithUrl:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (void)setLeftNavigationBarButton:(id)a0 bindingJS:(id)a1;
- (void)setRightNavigationBarButton:(id)a0 bindingJS:(id)a1;
- (id)getViewControllerWithUrl:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (void)doCloseWithNotAnimation;
- (void)MoveOtherWindowOutOfFrame;
- (void).cxx_destruct;
- (BOOL)open;
- (void)setNavigationTitle:(id)a0;
- (void)closeWindow;
- (void)dealloc;
- (void)setNavigationBarHidden:(id)a0 animated:(id)a1;
- (void)doClose;

@end
