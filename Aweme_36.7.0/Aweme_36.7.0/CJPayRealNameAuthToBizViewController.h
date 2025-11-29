@class MASConstraint, NSDictionary, UIView, CJPayAuthVerifiedView, CJPayAuthQueryResponse;

@interface CJPayRealNameAuthToBizViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) CJPayAuthQueryResponse *authQueryResponse;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *trackAndStyleParams;
@property (copy, nonatomic) id /* block */ authCallbackBlock;
@property (retain, nonatomic) CJPayAuthVerifiedView *authView;
@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *hiddenBottomCornerView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) MASConstraint *authViewTopConstraint;

- (id)initWithParams:(id)a0 authQueryResponse:(id)a1 authCallback:(id /* block */)a2;
- (void)p_setupBlock;
- (id)p_buildTrackerParams;
- (void)p_showNotMeAlertWithDisagreeUrl:(id)a0;
- (void)p_updateProtocolView;
- (void)p_runExitAnimationWithCompletion:(id /* block */)a0;
- (void)p_showAuthorizedTips;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
