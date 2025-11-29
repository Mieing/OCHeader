@class NSString, NSDictionary, UIView;
@protocol CJPayLynxViewDelegate;

@interface CJPayBaseLynxView : UIView <CJPayLynxViewDelegate>

@property (retain, nonatomic) UIView *lynxView;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) id /* block */ loadCompletion;
@property (weak, nonatomic) id<CJPayLynxViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ argusBlock;
@property (nonatomic) long long loadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidConstructJSRuntime;
- (void)viewWillCreated;
- (void)viewDidCreated;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (id)initAnnieXWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scheme:(id)a1 initDataStr:(id)a2 uiConfig:(id)a3;
- (void)publishEvent:(id)a0 data:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scheme:(id)a1 initDataStr:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scheme:(id)a1 initDataStr:(id)a2 useAnnieX:(BOOL)a3 uiConfig:(id)a4;
- (void)p_logInfoWithFuncName:(id)a0 params:(id)a1;
- (void)publishCommenEvent:(id)a0 data:(id)a1;
- (void)p_setupUI;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)reload;
- (void)viewDidDisappear;

@end
