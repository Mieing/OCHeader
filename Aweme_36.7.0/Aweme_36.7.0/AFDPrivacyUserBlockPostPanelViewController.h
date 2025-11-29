@class UIView, AWEUserModel, AWEAwemeModel;

@interface AFDPrivacyUserBlockPostPanelViewController : UIViewController

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isRequestOnAir;

+ (void)showWithAweme:(id)a0 user:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;

- (id)initWithAweme:(id)a0 user:(id)a1;
- (void)p_clickCancelButton;
- (void)p_clickConfirmButton;
- (void)p_changeAwemeBlockStatus:(BOOL)a0 user:(id)a1 completion:(id /* block */)a2;
- (void)p_changeStoryBlockStatus:(BOOL)a0 user:(id)a1 completion:(id /* block */)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
