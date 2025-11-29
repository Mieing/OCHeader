@class UINavigationController, NSString, WAAppTaskExtInfo, WAAppOpenParameter, UIViewController;

@interface WAAppTaskHotLaunchContext : MMObject

@property (nonatomic) BOOL redirectPage;
@property (copy, nonatomic) NSString *relativeURL;
@property (retain, nonatomic) WAAppTaskExtInfo *oldTaskExtInfo;
@property (retain, nonatomic) WAAppOpenParameter *openInfo;
@property (nonatomic) unsigned long long oldTaskRunningState;
@property (weak, nonatomic) UINavigationController *presentingNavigationController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL keepContextPage;

- (void).cxx_destruct;

@end
