@class NSDictionary, NSArray, NSString;
@protocol AWEPopViewInfoDelegate, AWEAlertManagerDelegate, AWEAlertTaskLifeCycleDelegateProtocol, AWEAlertLaunchScheduleService, AWEAlertDismissExecuteDelegateProtocol, AWEAlertSplashService;

@interface AWEAlertManagerConfiguration : NSObject <AWEAlertConfigurationReadOnly>

@property (nonatomic) unsigned long long priorityOrderedType;
@property (nonatomic) BOOL alertTaskAsyncAvailable;
@property (nonatomic) BOOL disableForceAlert;
@property (nonatomic) BOOL enableForceAlertTrack;
@property (nonatomic) BOOL componentInterceptorEnable;
@property (nonatomic) BOOL popViewRemoveInterfaceOptimizeEnable;
@property (copy, nonatomic) NSDictionary *popViewMonitorConfig;
@property (copy, nonatomic) NSDictionary *popViewEventOptimizeConfig;
@property (copy, nonatomic) NSArray *interceptorRegistry;
@property (retain, nonatomic) id<AWEAlertManagerDelegate> delegate;
@property (retain, nonatomic) id<AWEAlertTaskLifeCycleDelegateProtocol> lifeCycleDelegate;
@property (retain, nonatomic) id<AWEAlertDismissExecuteDelegateProtocol> dismissExecuteDelegate;
@property (retain, nonatomic) id<AWEPopViewInfoDelegate> popViewHandler;
@property (retain, nonatomic) id<AWEAlertLaunchScheduleService> launchProtectService;
@property (retain, nonatomic) id<AWEAlertSplashService> splashService;
@property (readonly, copy, nonatomic) NSArray *showCallbackDetectWhitelist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (void).cxx_destruct;

@end
