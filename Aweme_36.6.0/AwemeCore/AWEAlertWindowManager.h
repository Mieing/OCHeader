@class UIWindow, AWEAlertWindow, NSArray, AWEUserPolicyTermModel, NSString, UIViewController;

@interface AWEAlertWindowManager : NSObject <AWEAlertWindowManagerProtocol>

@property (retain, nonatomic) UIViewController *uploadContactAlertViewController;
@property (retain, nonatomic) AWEAlertWindow *alertWindow;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) UIWindow *lastWindow;
@property (retain, nonatomic) AWEUserPolicyTermModel *policyModel;
@property (retain, nonatomic) NSArray *subPopModels;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)showAlertViewController:(id)a0;
- (void)showAlertViewControllerWithParamsDict:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)makeKeyAndVisible;

@end
