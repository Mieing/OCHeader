@class NSString, NSMutableDictionary;

@interface AWEComplianceMonitor : NSObject <AWEUserMessage, HTSAccountMessage, AWEComplianceMonitor>

@property (retain, nonatomic) NSMutableDictionary *eventDictionary;
@property (retain, nonatomic) NSMutableDictionary *vcDictionary;
@property (retain, nonatomic) NSMutableDictionary *pendingActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)clearEventForKey:(id)a0;
- (id)collectWindowLevelMessage;
- (BOOL)calculatedTeenModeEnabledWithModel:(id)a0;
- (id)minorModeTypeWithModel:(id)a0;
- (void)registerEventForKey:(id)a0;
- (void)registerViewControllerEventInit:(id)a0;
- (void)registerViewControllerEventAppear:(id)a0;
- (void)registerViewControllerEventClick:(id)a0;
- (void)registerViewControllerEventDealloc:(id)a0;
- (void)clearRegisterViewControllerEvent:(id)a0;
- (void)equeueMonitorType:(long long)a0 extraInfo:(id)a1;
- (void)trackTeenModeChangeWithLastModel:(id)a0 newModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
