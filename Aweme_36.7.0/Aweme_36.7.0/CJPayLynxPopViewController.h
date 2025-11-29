@class NSString, NSDictionary, CJPayBaseLynxView, NSTimer;

@interface CJPayLynxPopViewController : CJPayFullPageBaseViewController <AWEYAPRetainPopupViewControllerProtocol, CJPayLynxViewDelegate>

@property (retain, nonatomic) CJPayBaseLynxView *lynxView;
@property (copy, nonatomic) NSDictionary *lynxParams;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL haveShowError;
@property (retain, nonatomic) NSTimer *closeTimer;
@property (copy, nonatomic) id /* block */ eventBlock;
@property (nonatomic) long long lynxPageRenderTime;
@property (nonatomic) BOOL cancelAnimate;
@property (nonatomic) long long closeMode;
@property (copy, nonatomic) id /* block */ decideCloseBlock;
@property (copy, nonatomic) NSString *scene;
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
- (void)closeRetainPopupWithCompletion:(id /* block */)a0;
- (id)initWithSchema:(id)a0 contentInfo:(id)a1;
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
