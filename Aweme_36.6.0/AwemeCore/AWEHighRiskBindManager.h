@class NSString, UIViewController;

@interface AWEHighRiskBindManager : NSObject <AWEUserMessage, AWEHighRiskBindManagerProtocol, AWEAlertProtocol>

@property (weak, nonatomic) UIViewController *step1vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isHighRiskEnded;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBindPhone;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)handleBroadcastNotification:(id)a0;
- (id)enterFrom:(long long)a0;
- (void)showViewControllerIfNeededFrom:(long long)a0;
- (void)finishBind;
- (void)showIfNeededFromLaunch;
- (BOOL)isHighRiskNumber;
- (void)showSkipAlert;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldShow;

@end
