@interface AWEMVChannelLaunchTracker : NSObject

@property (nonatomic) double launchPreRequestTime;
@property (nonatomic) double launchRequestTime;
@property (nonatomic) double launchRequestResponseTime;
@property (nonatomic) double launchRequestDurationMS;
@property (nonatomic) unsigned long long requestResponseStatus;
@property (nonatomic) double launchRequestResponseRenderTime;
@property (nonatomic) double launchCachePreFetchBeginTime;
@property (nonatomic) double launchCacheFetchBeginTime;
@property (nonatomic) double launchCacheFetchDoneTime;
@property (nonatomic) double launchCacheFetchDurationMS;
@property (nonatomic) unsigned long long cacheResponseStatus;
@property (nonatomic) double launchCacheResponseRenderTime;
@property (nonatomic) double launchFirstRenderTime;
@property (nonatomic) BOOL isSplashShown;
@property (nonatomic) double splashShowBeginTime;
@property (nonatomic) double splashShowEndTime;
@property (nonatomic) double privacyAlertShowBeginTime;
@property (nonatomic) double privacyPolicyAgreeTime;
@property (nonatomic) double idfaAlertShowBeginTime;
@property (nonatomic) double idfaAgreeTime;
@property (nonatomic) double deviceIDRequestBeginTime;
@property (nonatomic) double deviceIDRequestEndTime;
@property (nonatomic) unsigned long long splashEndMethod;
@property (nonatomic) BOOL launchAlreadyTrack;
@property (nonatomic) BOOL didEnterForeground;
@property (nonatomic) long long keychainDIDResultType;

+ (void)observeFirstRenderWithBlock:(id /* block */)a0;
+ (void)markTimingWithType:(unsigned long long)a0;
+ (BOOL)isSplashShown;
+ (unsigned long long)splashDisappearReason;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (void)observeFirstRenderTime;
+ (void)markTimingWithType:(unsigned long long)a0 userInfo:(id)a1;
+ (void)markKeychainDIDRequestType:(long long)a0;
+ (id)sharedInstance;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)splashWillAppearWithAdModelNotification:(id)a0;
- (void)splashDisappearNotification:(id)a0;
- (void)privacyAlertDidShow;
- (void)privacyPolicyAgree;
- (void)idfaAlertDidShow;
- (void)idfaAgree;
- (void)deviceIDWillRegisted;
- (void)deviceIDDidRegisted;
- (void)_markTimingWithType:(unsigned long long)a0 userInfo:(id)a1;
- (BOOL)enableLaunchTrackFix;
- (void)trackFirstRefreshIfNeeded;
- (void)_trackFirstRefresh;
- (BOOL)enableAddLaunchModeParams;
- (void)triggerBootMarkFeedReady:(id)a0;
- (id)initPrivate;
- (void)appDidBecomeActive;

@end
