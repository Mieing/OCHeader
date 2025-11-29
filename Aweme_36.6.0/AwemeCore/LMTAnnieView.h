@class LMTNodeModel, NSString, NSDictionary, UIView, LMTContext, AWEUILoadingView;
@protocol BDXViewContainerProtocol, LMTAnnieViewDelegate;

@interface LMTAnnieView : UIView <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<LMTAnnieViewDelegate> delegate;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) LMTContext *lmtContext;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isLoad;
@property (retain, nonatomic) LMTNodeModel *nodeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)hideErrorView;
- (void)hideLoading;
- (void)loadWithSchema:(id)a0 globalProps:(id)a1 initialData:(id)a2;
- (void)setupBridgeWithContext:(id)a0;
- (id)initWithContext:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;
- (void)loadWithSchema:(id)a0;
- (void)loadNode;
- (void).cxx_destruct;
- (void)showErrorView;
- (void)showLoading;

@end
