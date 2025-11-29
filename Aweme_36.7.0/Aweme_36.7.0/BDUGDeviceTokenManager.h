@class NSString, NSDictionary, BDUGDeviceUnionConfig, NSArray;

@interface BDUGDeviceTokenManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) BOOL hasTryToFetchIDFA;
@property (retain) BDUGDeviceUnionConfig *config;
@property (copy, nonatomic) NSDictionary *settingsDic;
@property (nonatomic) unsigned long long coldStatus;
@property (copy, nonatomic) NSArray *hostAllowPathPrefixlist;
@property (copy, nonatomic) NSArray *hostBlockPathPrefixlist;
@property (copy, nonatomic) id /* block */ idfaParamsBlock;
@property (copy, nonatomic) id /* block */ currentIDFAStatusBlock;

+ (id)refreshActHashPath;
+ (id)applyTokenPath;
+ (void)__logEvent:(id)a0 params:(id)a1;
+ (id)sharedInstance;

- (void)addRequestFilter;
- (void)addResonseFilter;
- (void)registerAccountNotifications;
- (void)coldRefreshIfNeeded;
- (void)refreshActHashWithCallBack:(id /* block */)a0 scene:(unsigned long long)a1;
- (void)syncDeviceTokenIfNeedWithCompletion:(id /* block */)a0;
- (id)commonGetParams;
- (id)commonPostParams;
- (void)accountDidLoginNotificationAction;
- (void)accountDidLogoutNotificationAction;
- (void)bindPhoneNotificationAction;
- (void)rebindPhoneNotificationAction;
- (void)syncDeviceTokenWithCompletion:(id /* block */)a0;
- (BOOL)needFilter:(id)a0;
- (id)makeActCommonFromHeader:(id)a0;
- (void)refreshActHashWithScene:(unsigned long long)a0;
- (void)setDeviceUnionHost:(id)a0;
- (void)startAfterGotDid;
- (void)settingsDidUpdateWithConfig:(id)a0;
- (void)hostHasTryToGetIDFANotification;
- (void)updateCommonParams:(id)a0;
- (id)activityInfos;
- (void)clearUnionCache;
- (void)refreshActHashWithCallBack:(id /* block */)a0;
- (void).cxx_destruct;
- (id)deviceToken;
- (id)init;
- (void)setDeviceToken:(id)a0;
- (void)dealloc;

@end
