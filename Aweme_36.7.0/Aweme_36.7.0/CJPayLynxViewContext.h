@class NSString, UIView;
@protocol CJPayLynxViewDelegate;

@interface CJPayLynxViewContext : NSObject <IESHYHybridViewLifecycleProtocol, CJPayLynxViewContextProtocol>

@property (weak, nonatomic) UIView *lynxCardView;
@property (weak, nonatomic) id<CJPayLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewWillCreated:(id)a0;
- (void)viewDidCreated:(id)a0;
- (void).cxx_destruct;

@end
