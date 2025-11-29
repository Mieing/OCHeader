@class UIImageView, UILabel, AWETeenUserInfo;

@interface AWETeenSetUserInfoBaseViewController : UIViewController

@property (nonatomic) long long allStepCount;
@property (nonatomic) long long stepIndex;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) long long messageType;
@property (weak, nonatomic) AWETeenUserInfo *userMessage;
@property (copy, nonatomic) id /* block */ setCompletion;

- (void)backBtnClicked:(id)a0;
- (void)p_setupNavigationBar;
- (id)initWithMessageType:(long long)a0 stepIndex:(long long)a1 userMessage:(id)a2 allStepCount:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupContent;

@end
