@class NSString, BDUGLuckyDogSideChainTracker;

@interface BDUGLuckyDogDialogSideChainTracker : NSObject <BDUGLuckyDogSideChainTrackerDelegate, BDUGLuckyCleanCacheDelegateProtocol>

@property (retain, nonatomic) BDUGLuckyDogSideChainTracker *sideChainTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onCleanCache;
+ (void)preStartupModule;
+ (id)sharedInstance;
+ (id)moduleName;

- (void)trackNewPopupWithPopupId:(id)a0 popupInfo:(id)a1;
- (void)stopTrackingPopupWithPopupId:(id)a0 reason:(id)a1 popupInfo:(id)a2;
- (void)staticSettingPopUpDate;
- (void)activateCachedTrackedPopup:(id)a0 popupInfo:(id)a1;
- (void)activateButNotInitCachedTrackedPopup:(id)a0;
- (void)onActivateCachedTrackedPopupEnd;
- (void)updatePopupReasonWithPopupId:(id)a0 reason:(id)a1 popupInfo:(id)a2;
- (void)updatePopupStatusWithPopupId:(id)a0 status:(id)a1;
- (void)__setupTracker;
- (BOOL)__isDialogTrackerEnable;
- (void)__cleanCache;
- (void)sendTrackerEventWithIdentity:(id)a0 reasonMap:(id)a1 objInfo:(id)a2 extraInfo:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEnabled;

@end
