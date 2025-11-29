@class NSTimer, NSString;

@interface AWEFeedCacheCenterUtilManager : NSObject <AWEUserMessage, AWEFeedCacheCenterUtilManagerProtocol>

@property (retain, nonatomic) NSTimer *safetyCheckTimer;
@property (nonatomic) double lastEnterBackgroundTime;
@property (nonatomic) double launchTimestamp;
@property (nonatomic) BOOL appIsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)triggerSafetyCheck;
- (void)addNotifications;
- (void)applicationDidDidBecomeActive;
- (void)handleVideoSafetyCheckWithResults:(id)a0;
- (void)loginAndLogoutMission;
- (void)backgroundMission;
- (void)clearDuplicatedCacheFromFeedRequest:(id)a0;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)setup;

@end
