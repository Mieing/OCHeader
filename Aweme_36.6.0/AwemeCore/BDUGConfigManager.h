@class TTPushManager, NSString, NSTimer, NSDictionary, NSDate, NSLock, BDUGNotificationConfig;
@protocol BDUGPushSignalListenDelegate;

@interface BDUGConfigManager : NSObject

@property (copy, nonatomic) NSString *currentNetworkStatus;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long retryRegisterDeviceCount;
@property (retain, nonatomic) NSDate *firstTimeStartUpDate;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) BDUGNotificationConfig *config;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *installID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *versionCode;
@property (nonatomic) BOOL enableMonitor;
@property (nonatomic) BOOL disabledNSELog;
@property (nonatomic) BOOL disableNSECommunicationMonitor;
@property (nonatomic) BOOL isAuth;
@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) id recallDelegate;
@property (weak, nonatomic) id<BDUGPushSignalListenDelegate> signalListenDelegate;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) long long way;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (nonatomic) long long serviceID;
@property (nonatomic) long long methodID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isUseBadgeStrategy;
@property (nonatomic) long long currentBadgeCount;
@property (nonatomic) double nextReportTime;
@property (nonatomic) double launchTimestamp;
@property (nonatomic) BOOL isPriorityUpdate;
@property (nonatomic) BOOL isSenderUpdated;
@property (nonatomic) double lastReportTime;
@property (copy, nonatomic) NSDictionary *badgeStrategyDic;
@property (copy) NSDictionary *appSettingDic;
@property (copy, nonatomic) NSDictionary *appUserInfo;
@property (nonatomic) BOOL useOldStrategy;
@property (copy, nonatomic) NSString *localSecUid;
@property (nonatomic) long long tokenResetRetryCount;
@property (nonatomic) BOOL needResetToken;
@property (nonatomic) BOOL hasRefreshToken;
@property (nonatomic) BOOL hasRequestedToken;
@property (copy, nonatomic) NSString *bootId;
@property (nonatomic) BOOL disableUploadToken;
@property (readonly, nonatomic) NSDate *hostFirstTimeStartUpDate;

+ (id)sharedInstance;

- (void)appSettingDicDidSet;
- (void)registerDetailOptionsWith:(id)a0;
- (id)buildNotificationAction:(id)a0;
- (id)buildUNNotificationActionIcon:(id)a0;
- (void)tokenRetryEnableWithCompletion:(id /* block */)a0;
- (double)tokenRetryInterval;
- (id)buildUINotificationAction:(id)a0;
- (void)setLastPullTime:(double)a0;
- (id)badgestrategyDic;
- (void)retryRegisterDeviceToken;
- (void)registerNotificationCategories;
- (void).cxx_destruct;
- (void)connectionChanged:(id)a0;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillEnterForeground;

@end
