@class AWEUGComposeResponseModel, UIImageView, HMDThreadSafeDictionary;

@interface AWEUGLocalPushManager : NSObject

@property (copy, nonatomic) AWEUGComposeResponseModel *cacheModel;
@property (retain, nonatomic) HMDThreadSafeDictionary *cacheImageDic;
@property (retain, nonatomic) UIImageView *tmpImageView;
@property (nonatomic) long long currentBadgeCount;

+ (id)sharedManager;

- (void)postLocalPushWithNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)onAppFeedReady;
- (void)handleSilentBadgeLogicWithCurrentBadgeCount:(long long)a0;
- (void)handleLocalPushLogicWithCurrentBadgeCount:(long long)a0;
- (void)withdrawUnissuedNotificationsWithPrefix:(id)a0;
- (BOOL)localPushEnable:(BOOL)a0;
- (id)cleanFileURLFromString:(id)a0;
- (void)saveWebImageUrl:(id)a0 completion:(id /* block */)a1;
- (long long)localPushSendDays:(BOOL)a0;
- (void)updateStorageWithLastTimeKey:(id)a0 xTimesKey:(id)a1;
- (void)scheduleNotificationTasksWithDays:(long long)a0 prefix:(id)a1 count:(long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (BOOL)checkFrequencyControlWithX:(long long)a0 y:(long long)a1 lastTimeKey:(id)a2 xTimesKey:(id)a3;
- (long long)separateTime;
- (id)createRandomTime:(long long)a0 days:(long long)a1;
- (BOOL)daysControl;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillEnterForeground;

@end
