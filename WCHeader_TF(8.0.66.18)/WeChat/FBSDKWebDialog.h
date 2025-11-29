@class NSString, NSDictionary, FBSDKWebDialogView, UIView;
@protocol FBSDKWebDialogDelegate;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate> {
    UIView *_backgroundView;
    FBSDKWebDialogView *_dialogView;
}

@property (nonatomic, getter=shouldDeferVisibility) BOOL deferVisibility;
@property (weak, nonatomic) id<FBSDKWebDialogDelegate> delegate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithName:(id)a0 parameters:(id)a1 delegate:(id)a2;

- (void)dealloc;
- (BOOL)show;
- (void)webDialogView:(id)a0 didCompleteWithResults:(id)a1;
- (void)webDialogView:(id)a0 didFailWithError:(id)a1;
- (void)webDialogViewDidCancel:(id)a0;
- (void)webDialogViewDidFinishLoad:(id)a0;
- (void)_addObservers;
- (void)_deviceOrientationDidChangeNotification:(id)a0;
- (void)_removeObservers;
- (void)_cancel;
- (void)_completeWithResults:(id)a0;
- (void)_dismissAnimated:(BOOL)a0;
- (void)_failWithError:(id)a0;
- (id)_generateURL:(id *)a0;
- (BOOL)_showWebView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForOrientation;
- (void)_updateViewsWithScale:(double)a0 alpha:(double)a1 animationDuration:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
