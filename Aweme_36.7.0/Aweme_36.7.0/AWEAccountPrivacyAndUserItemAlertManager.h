@class NSString, AWEAccountPrivacyAndUserItemAlertView;
@protocol AWEMRPrivacyAlertTracker;

@interface AWEAccountPrivacyAndUserItemAlertManager : NSObject <AWEBasicModeMessage, AWEMessageReachPopViewProtocol, AWEAlertProtocol, AWEPrivacyAlertManagerProtocol>

@property (retain, nonatomic) AWEAccountPrivacyAndUserItemAlertView *alertView;
@property (retain, nonatomic) id<AWEMRPrivacyAlertTracker> mrTracker;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)sharedInstance;

- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (BOOL)canShow;
- (void)basicModeDidChange:(BOOL)a0;
- (void)showQuitBasicModeAlert;
- (BOOL)hasAgreed;
- (void)showQuitBasicModeAlertWithAgreeBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showQuitAppInBasicModeAlertWithAgreeBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)markAlertAgreed;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)showIfNeeded;
- (BOOL)shouldConfigSelas;
- (void)invokeOnCloseWithShowed:(BOOL)a0;
- (void)showIfNeededAndDecideHandler:(id /* block */)a0;
- (void)onceGetStorageAlertAgreedKey;
- (void)setPrivacyAlertAgreedKey;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldShow;

@end
