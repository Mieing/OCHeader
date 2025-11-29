@class UIButton, NSString, SettingModifyEmailOnBindHeadView;

@interface SettingModifyEmailOnBindViewController : SettingModifyEmailBaseViewController

@property (retain, nonatomic) SettingModifyEmailOnBindHeadView *m_commonHeadView;
@property (retain, nonatomic) UIButton *unbindEmailButton;
@property (retain, nonatomic) NSString *currentEmail;

- (id)initWithEmailLogic:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
