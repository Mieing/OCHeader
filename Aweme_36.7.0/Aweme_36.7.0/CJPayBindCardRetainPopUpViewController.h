@class CJPayStyleButton, CJPayButton, NSString, UIView, CJPayBindCardRetainInfo, UILabel;

@interface CJPayBindCardRetainPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) UIView *retainContentView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *securityDetail;
@property (retain, nonatomic) CJPayBindCardRetainInfo *retainInfo;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_trackWithEvent:(id)a0 params:(id)a1;
- (void)p_trackPopUpWithEvent:(id)a0 params:(id)a1;
- (void)p_setupUIForCommonWithButtonMsg:(id)a0;
- (void)closeTapped;
- (id)initWithRetainInfo:(id)a0;
- (void)confirmTapped;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
