@class BDTuringVerifyModel, NSString, UIActivityIndicatorView, WKWebView, NSURL, BDTuringConfig, NSTimer;
@protocol BDTuringUniversalViewDelegate;

@interface BDTuringUniversalView : UIView <WKNavigationDelegate, BDTuringUniversalViewHelperPiperDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSURL *initialURL;
@property (nonatomic) long long startLoadTime;
@property (retain, nonatomic) BDTuringVerifyModel *model;
@property (retain, nonatomic) BDTuringConfig *config;
@property (weak, nonatomic) id<BDTuringUniversalViewDelegate> delegate;
@property (retain, nonatomic) NSTimer *h5PageLoadTimer;
@property (nonatomic) double timerInterval;

- (void)stopLoadingView;
- (void)handleNativeEventUpload:(id)a0 callback:(id /* block */)a1;
- (void)startLoadingView;
- (void)onOrientationChanged:(id)a0;
- (void)showUniversalView;
- (struct CGPoint { double x0; double x1; })subViewCenter;
- (void)adjustWebViewPosition;
- (void)dismissUniversalView;
- (void)handleWebViewFail:(id)a0;
- (void)handlePiperCloseWeb:(id)a0 callback:(id /* block */)a1;
- (void)onHelperViewWillClose:(id)a0;
- (BOOL)isSameBaseURL:(id)a0 withURL:(id)a1;
- (void)handleH5PageLoadFailure;
- (void)handleWebViewFailWithError:(id)a0;
- (void)handlePiperNewWebResult:(id)a0;
- (void)cleanDelegates;
- (id)createIndicatorView;
- (void)handlePiperConfirmDialogSize:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperH5Available:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperVerifyConfirmResult:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperOpenNewWeb:(id)a0 callback:(id /* block */)a1;
- (void)handleConfirmDialogSize:(id)a0;
- (void)cancelH5PageLoadTimer;
- (void)closeUniversalView;
- (void)handlePiperVerifyConfirmResult:(id)a0;
- (void)installPiper;
- (void)handleVerifyConfirmResultEvent:(id)a0;
- (void)collectShowEvent;
- (void)handleUniversalViewOK;
- (void)handleUniversalViewCancel;
- (void)handleUniversalViewBackup;
- (void)continueVerify;
- (void)startH5PageLoadTimer;
- (void)hideUniversalView;
- (void)h5PageLoadTimerFired;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)setAnimationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
