@class WCTableViewManager, WCFinderCustomPanelSheet, UIButton;

@interface WCFinderPersonalizedSettingViewController : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (weak, nonatomic) WCFinderCustomPanelSheet *panelSheet;
@property (retain, nonatomic) UIButton *frequentlyQuestionButton;
@property (nonatomic) unsigned long long options;

- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)configureTableView;
- (void)configureQuestionButton;
- (void)reloadTableView;
- (void)addPersonalizedRecommendationSet;
- (void)changePersonalizedRecommendationVideo;
- (void)changePersonalizedRecommendationLive;
- (void)_didTapCategoryCell;
- (void)_didTapQuestionButton;
- (void)changePersonalizedRecommendationSwitch:(int)a0;
- (BOOL)getCurrentSwitchFlagWithScene:(int)a0;
- (void)cancelAlertAction:(id)a0;
- (void)clickCloseRecommendVideo;
- (void)clickCloseRecommendLive;
- (void)changeRecommendSceneValue:(int)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
