@class PKAddPassesViewController;

@interface WAJSContextPlugin_PassKit : WAJSContextPluginBase

@property (nonatomic) BOOL isPAPUIOn;
@property (nonatomic) BOOL isPAPUIActionBlocked;
@property (retain, nonatomic) PKAddPassesViewController *retainAssesViewController;

- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (BOOL)tryEnablePAPUI;
- (void)unablePAPUI;
- (BOOL)tryRetainWeAppAddPassViewController;
- (void)tryReleaseWeAppAddPassViewController;
- (void).cxx_destruct;

@end
