@class MMLiteAppViewController, MMUIViewController;

@interface WCFinderJsApiPluginScheduler : LiteAppJsApiPluginScheduler

@property (weak, nonatomic) MMUIViewController *fromVC;
@property (weak, nonatomic) MMLiteAppViewController *toLiteAppVC;

- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
