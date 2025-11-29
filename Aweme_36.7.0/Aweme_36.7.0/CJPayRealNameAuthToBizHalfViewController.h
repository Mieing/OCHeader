@class CJPayAuthVerifiedHalfView, NSDictionary, UIView, MASConstraint, CJPayAuthQueryResponse;

@interface CJPayRealNameAuthToBizHalfViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayAuthQueryResponse *authQueryResponse;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *trackAndStyleParams;
@property (retain, nonatomic) CJPayAuthVerifiedHalfView *authView;
@property (retain, nonatomic) UIView *hiddenBottomCornerView;
@property (copy, nonatomic) id /* block */ authCallbackBlock;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) MASConstraint *authViewTopConstraint;

- (id)initWithParams:(id)a0 authQueryResponse:(id)a1 authCallback:(id /* block */)a2;
- (void)p_setupBlock;
- (id)p_buildTrackerParams;
- (void)p_showNotMeAlertWithDisagreeUrl:(id)a0;
- (id)p_getProtocolUrlWithName:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
