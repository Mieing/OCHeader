@class NSString, NSMutableArray;

@interface AWEAlertSplashServiceImpl : NSObject <AWEAlertSplashService>

@property (retain, nonatomic) NSMutableArray *splashDisappearActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)onSplashDisappear:(id)a0;
- (BOOL)willShowOrShowingSplash;
- (id)triggerAvoidSplashConfig;
- (BOOL)triggerAvoidSplashEnable;
- (id)triggerAvoidSplashList;
- (void)runOnSplashDisappear:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setup;

@end
