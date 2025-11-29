@class NSArray, NSString;

@interface AWEUGActiveTaskManager : NSObject <NSURLSessionDelegate, BDUGBGDownloadTaskProtocol, BDUGBGCloudkitTaskProtocol>

@property (nonatomic) BOOL enableKeepAliveFromAB;
@property (nonatomic) BOOL enableCloudKit;
@property (nonatomic) BOOL enableBGDownload;
@property (nonatomic) BOOL enableRedBadge;
@property (nonatomic) BOOL enableLocalPush;
@property (retain, nonatomic) NSArray *activeRangeList;
@property (nonatomic) BOOL isSafeToday;
@property (nonatomic) BOOL hasSetCloudkitActiveTask;
@property (nonatomic) BOOL hasSetDownloadActiveTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)checkRiskStatusCrossDay;
- (void)configSDK;
- (id)keyForToday;
- (void)triggerCloudKitTask:(id)a0;
- (void)triggerBGDownloadTask:(id)a0;
- (void)checkCloudkitdKeepAliveTaskCrossDay;
- (void)checkDownloadKeepAliveTaskCrossDay;
- (long long)delayTimeFromStartTime:(long long)a0 toEndTime:(long long)a1;
- (BOOL)isFromCloudkit:(id)a0;
- (id)bgDownloadURLString;
- (void)bussinessWeakupHandler;
- (id)cloudKitSilentRecordType;
- (id)cloudKitSilentSubscriptionId;
- (id)appIdentifierPrefix;
- (void)setKeepAliveTaskIfNeeded:(id)a0;
- (void)handleBackgroundURLSessionIfNeeded;
- (void)handleRemoteNotificationIfNeeded;
- (void).cxx_destruct;
- (id)cloudKitContainer;
- (id)init;
- (void)setupConfig;

@end
