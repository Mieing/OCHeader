@class NSDictionary, NSString, CJPayBaseLynxView;

@interface CJPayNestingLynxCardViewController : CJPayFullPageBaseViewController <CJPayLynxViewDelegate>

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) CJPayBaseLynxView *lynxCard;
@property (nonatomic) BOOL haveReciveSuccess;
@property (nonatomic) BOOL haveShowError;
@property (copy, nonatomic) id /* block */ eventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewDidFinishLoadWithError:(id)a0;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (BOOL)cjNeedAnimation;
- (BOOL)cjShouldShowBottomView;
- (BOOL)p_conformTimeInterval:(long long)a0;
- (id)initWithSchema:(id)a0 data:(id)a1;
- (void)p_judgeOpenStatus;
- (void)p_handleOpenError;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
