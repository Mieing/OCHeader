@class NSRecursiveLock, AffMigPlatformProviderCallback, WXGRoamPackageHandler, NSOperationQueue, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WXGRoamAffMigPlatformProvider : NSObject <AffMigPlatformProviderBase, WXGRoamImportQueueDelegate>

@property (retain, nonatomic) AffMigPlatformProviderCallback *migPlatformProviderCb;
@property (retain, nonatomic) WXGRoamPackageHandler *packageHandler;
@property (retain, nonatomic) NSRecursiveLock *mapLock;
@property (retain, nonatomic) NSOperationQueue *getPackageOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue;
@property (retain, nonatomic) NSMutableDictionary *importQueueMap;
@property (nonatomic) BOOL isEmigration;
@property (nonatomic) BOOL mIsPcMigration;
@property (nonatomic) BOOL mIsTransfering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getGetPackageOperationQueue;
- (void)setCallback:(id)a0;
- (id)getBridgeQueue;
- (void)getChatPackageAsync:(unsigned long long)a0 packageId:(unsigned long long)a1 conversationId:(id)a2 fromTime:(unsigned long long)a3 toTime:(unsigned long long)a4 offset:(unsigned long long)a5 limit:(int)a6 textOnly:(BOOL)a7;
- (void)insertChatPackageAsync:(unsigned long long)a0 packageId:(unsigned long long)a1 convId:(id)a2 chatPackage:(id)a3;
- (void)filterRestoreMediaAsync:(unsigned long long)a0 convId:(id)a1 svrIdList:(id)a2 mediaIdList:(id)a3 mediaTypeList:(id)a4;
- (void)requestSetupEnvWithUsernameAsync:(unsigned long long)a0 hashUsername:(id)a1;
- (void)getBatteryLevelAsync:(unsigned long long)a0;
- (id)getDeviceInfo;
- (void)notifyTaskStatus:(id)a0;
- (void)notifyTaskScene:(id)a0;
- (void)notifyTaskProgress:(id)a0;
- (BOOL)isPcMigration;
- (BOOL)isEmigrationMode;
- (BOOL)isTransfering;
- (BOOL)isRemoteClientSupportWXAM:(unsigned int)a0;
- (void)onRoamImportOneDirFinished:(unsigned long long)a0;
- (void)onRoamImportFinished:(unsigned long long)a0;
- (void).cxx_destruct;

@end
