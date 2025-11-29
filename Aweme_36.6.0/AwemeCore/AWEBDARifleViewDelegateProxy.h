@class NSDate, NSString, AWEBDARifleView;

@interface AWEBDARifleViewDelegateProxy : NSObject <AWEBDARifleViewDelegate>

@property (weak, nonatomic) AWEBDARifleView *bdaRifleView;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rifleViewWillStartLoading:(id)a0;
- (void)rifleView:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)rifleViewDidStartLoading:(id)a0;
- (void)rifleView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)rifleView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)rifleViewvDidFirstScreen:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)rifleViewDidUpdate:(id)a0;
- (void)rifleView:(id)a0 didRecieveError:(id)a1;
- (void)rifleView:(id)a0 didReceivePerformance:(id)a1;
- (void)rifleViewDidPageUpdate:(id)a0;
- (void)rifleViewDidConstructJSRuntime:(id)a0;
- (void)rifleView:(id)a0 updateTitle:(id)a1;
- (void).cxx_destruct;

@end
