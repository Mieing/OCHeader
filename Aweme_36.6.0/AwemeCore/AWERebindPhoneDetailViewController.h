@class NSString, DUXButton, UILabel, UIView;

@interface AWERebindPhoneDetailViewController : UIViewController

@property (retain, nonatomic) UILabel *rebindTitleLabel;
@property (retain, nonatomic) UILabel *rebindMaskPhoneLabel;
@property (retain, nonatomic) DUXButton *rebindPhoneButton;
@property (retain, nonatomic) UIView *ruleTipsView;
@property (retain, nonatomic) UILabel *ruleTipsPrefixLabel;
@property (retain, nonatomic) UILabel *ruleTipsLabel;
@property (retain, nonatomic) NSString *enterFrom;

- (id)trackParams;
- (void)rebindPhone;
- (void)backAction:(id)a0;
- (id)initWithEnterFrom:(id)a0;
- (void)trackBindFrontPageShow;
- (void)trackBindFrontPageSubmitWithButton:(id)a0;
- (void)trackBindRulePageShow;
- (void)trackBindRulePageClick;
- (void)ruleTipsClickAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
