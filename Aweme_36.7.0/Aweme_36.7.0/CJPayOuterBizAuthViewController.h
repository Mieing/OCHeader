@class CJPayStyleButton, NSString, CJPayQueryBindAuthorizeInfoResponse, UILabel, CJPayCommonProtocolView, CJPayCommonProtocolModel;

@interface CJPayOuterBizAuthViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (retain, nonatomic) CJPayQueryBindAuthorizeInfoResponse *queryBindResponse;
@property (copy, nonatomic) NSString *bindContent;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_confirmButtonClick;
- (void)p_startRequest;
- (void)close;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (double)containerHeight;

@end
