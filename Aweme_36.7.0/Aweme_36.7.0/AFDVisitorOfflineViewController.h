@class NSString, UIImageView, DUXButton, UILabel, AFDVisitorOfflineTextSettingsModel;

@interface AFDVisitorOfflineViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) AFDVisitorOfflineTextSettingsModel *textModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *isHideWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)clickBackButton;
- (void)addNavigationHeader;
- (void)clickActionButton;
- (void)trackEventForEnterProfileVisitor;
- (void)trackEventForExitProfileVisitor;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)updateUI;

@end
