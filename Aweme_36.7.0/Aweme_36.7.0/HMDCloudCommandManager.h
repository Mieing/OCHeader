@class NSString, HMDCloudCommandConfig, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDCloudCommandManager : NSObject <HeimdallrLocalModule>

@property (readonly, nonatomic) HMDCloudCommandConfig *cloudCommandConfig;
@property (readonly) BOOL isUpdatedConfig;
@property (nonatomic) int serviceID;
@property (nonatomic) int methodID;
@property BOOL isRunning;
@property BOOL isAutoPullEnabled;
@property (nonatomic) BOOL isObserving;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property BOOL isUpdatedConfig;
@property (retain, nonatomic) HMDCloudCommandConfig *cloudCommandConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *configUpdateSemphore;
@property (copy, nonatomic) id /* block */ alogUploadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)getInstance;

- (void)updateConfig:(id)a0;
- (void)executeCommandWithData:(id)a0 ran:(id)a1;
- (void)networkRequestEnableChanged;
- (void)_setupLongConnectChannel;
- (void)setPushManagerBroadcastEnabled:(BOOL)a0;
- (void)setCloudCommandNetWorkDelegateIMP;
- (void)setupCustomerCloudCommand;
- (void)getCloudCommandIfAvailable;
- (BOOL)requestNeedBlocked;
- (void)onPushManagerDidReceiveMessage:(id)a0;
- (void)setupLongConnectChannelIfAvailable;
- (void)setDiskComplianceHandler;
- (void)closeLongConnetChannelIfAvailable;
- (void)setAutoPullCommandEnable:(BOOL)a0;
- (void)setFilePathBlockList:(id)a0;
- (void)setIfForbidCloudCommandExecuteBlock:(id /* block */)a0;
- (void)setIfForbidCloudCommandBlock:(id /* block */)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (id)moduleName;
- (void)dealloc;

@end
