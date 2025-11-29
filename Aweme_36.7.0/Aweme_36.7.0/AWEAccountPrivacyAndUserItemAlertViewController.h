@class AWEAccountPrivacyAndUserItemAlertView;

@interface AWEAccountPrivacyAndUserItemAlertViewController : UIViewController

@property (retain, nonatomic) AWEAccountPrivacyAndUserItemAlertView *alertView;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (id)aAWEMainModuleServiceDOUYINSSAdapter;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
