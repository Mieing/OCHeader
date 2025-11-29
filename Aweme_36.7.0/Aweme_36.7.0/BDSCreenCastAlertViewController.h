@class UILabel, UIView, NSAttributedString, NSMutableArray;

@interface BDSCreenCastAlertViewController : BDSCBaseViewController

@property (copy, nonatomic) NSAttributedString *titleAttr;
@property (retain, nonatomic) NSMutableArray *actionsArray;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperaLineView;

+ (id)showCustomAlertWithTitle:(id)a0 message:(id)a1;

- (void)addCustomLabelAction:(id)a0;
- (void)setupAndLayoutSubviews;
- (void)actionHandler:(id)a0;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
