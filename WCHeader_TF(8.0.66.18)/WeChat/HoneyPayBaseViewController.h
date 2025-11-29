@class UIView;

@interface HoneyPayBaseViewController : WCPayBaseViewController

@property (retain, nonatomic) UIView *navBackground;

- (void)viewDidLoad;
- (void)dealloc;
- (void)showAlertWith:(id)a0;
- (void)clickRightBarButton:(id)a0;
- (id)dateStringFromTimestamp:(long long)a0;
- (id)accessibilityDateLabelFromTimestamp:(long long)a0;
- (void)addNavigationBarBackground:(id)a0;
- (void)didClickUnbind;
- (void)keyboardDidShow:(id)a0;
- (void)honeyPaykeyboardDidHide:(id)a0;
- (void).cxx_destruct;

@end
