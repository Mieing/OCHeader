@class NSSet, OnceLock, NSDictionary, NSString, AWEFeedCacheDataDepository;

@interface AWEFeedCacheFirstFactoryCreator : NSObject <AWEFeedCacheProcessorFactoryCreator>

@property (readonly, nonatomic) NSSet *keepSet;
@property (readonly, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (nonatomic) BOOL disableLock;
@property (retain, nonatomic) OnceLock *process_lock_custom;
@property (retain, nonatomic) OnceLock *process_lock_unconsumed;
@property (retain, nonatomic) OnceLock *process_lock_backup;
@property (copy, nonatomic) NSDictionary *sceneConfig;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long requestMaxTimes;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) unsigned long long selectBitrateType;
@property (nonatomic) BOOL isDownloadPicture;
@property (nonatomic) unsigned long long downloadLevel;
@property (nonatomic) long long preloadSize;
@property (nonatomic) BOOL forceRequest;
@property (nonatomic) double lastRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUpdateProcessorsWithDataDepository:(id)a0;
- (void)initDataWithForce;
- (void)requestTimesUpdate;
- (id)createUpdateProcessorsWithOutLockDataDepository:(id)a0;
- (id)createUncomsumedProcessorsWithOutLockDataDepository:(id)a0;
- (id)createUncomsumedProcessorsWithDataDepository:(id)a0;
- (id)createBackUpProcessorsWithOutLockDataDepository:(id)a0;
- (id)createBackUpProcessorsWithDataDepository:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)create;
- (void)initData;

@end
