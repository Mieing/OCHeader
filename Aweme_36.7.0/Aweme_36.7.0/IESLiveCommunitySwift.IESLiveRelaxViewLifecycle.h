@interface IESLiveCommunitySwift.IESLiveRelaxViewLifecycle : NSObject <RelaxViewLifecycle>

- (void)viewDidFirstScreen:(id)a0;
- (void)viewDidPageUpdate:(id)a0;
- (void)viewDidCreate:(id)a0;
- (void)viewLoadStart:(id)a0;
- (void)viewLoadFinish:(id)a0;
- (void)viewWillShow:(id)a0;
- (void)viewWillHide:(id)a0;
- (void)viewDidChangeIntrinsicContentSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)init;

@end
