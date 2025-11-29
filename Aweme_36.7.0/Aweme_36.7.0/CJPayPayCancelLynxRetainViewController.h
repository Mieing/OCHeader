@class NSString, NSDictionary, CJPayBaseLynxView, NSTimer;

@interface CJPayPayCancelLynxRetainViewController : CJPayFullPageBaseViewController <CJPayLynxViewDelegate>

@property (copy, nonatomic) NSDictionary *postFEParams;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) CJPayBaseLynxView *retainCard;
@property (retain, nonatomic) NSTimer *closeTimer;
@property (nonatomic) BOOL haveShowError;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ eventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewDidFinishLoadWithError:(id)a0;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (BOOL)cjNeedAnimation;
- (BOOL)cjShouldShowBottomView;
- (id)initWithRetainInfo:(id)a0 schema:(id)a1;
- (void)p_createCloseTimer;
- (void)p_showAnimationAction;
- (void)p_handleOpenError:(id)a0;
- (void)p_cancelCloseTimer;
- (BOOL)p_conformTimeInterval:(long long)a0;
- (void)p_timerHandleOpenError:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
