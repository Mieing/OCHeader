@class HMDThreadSafeDictionary;

@interface AWEAppIconBadgeManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *trackParams;
@property (nonatomic) BOOL feedReady;

+ (Class)aAWEAppIconBadgeCommonAdapterClass;
+ (id)sharedManager;

- (void)handleAppBadgeNumberOnActiveChange;
- (void)cleanAppBadgeNumberAndKeepNotification;
- (void)updateAppBadgeNumberFromNoticeManager;
- (void)handleBadgeCount;
- (BOOL)enableRedBadgeEqualMessageTabNumber;
- (void)setSourceOfTrackParam:(id)a0 count:(long long)a1;
- (BOOL)enableRedBadgeFakeNumber;
- (void)setApplicationBadgeNumber:(long long)a0 withCallback:(id /* block */)a1;
- (void)updateAppBadgeNumberAndKeepNotificitaion:(long long)a0;
- (id)aAWEAppIconBadgeCommonAdapter;
- (id)sourceOfTrackParam;
- (void)onfeedReady;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;

@end
