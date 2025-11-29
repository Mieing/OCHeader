@class NSArray;

@interface RTVAWEAppDelegate : RxApplicationDelegate

@property (copy, nonatomic) NSArray *rtvApplicationServices;

+ (id)sharedInstance;

- (void)onAppHandleNotification;
- (id)applicationModules;
- (id)applicationServices;
- (id)__requiredApplicationModuleClasses;
- (id)__optionalApplicationModuleClassNames;
- (id)__applicationServicesClassNames;
- (void)appDidLaunch;
- (void)appAfterLaunch;
- (void).cxx_destruct;

@end
