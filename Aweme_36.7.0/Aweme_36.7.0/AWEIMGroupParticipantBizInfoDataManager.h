@class IESWCDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMGroupParticipantBizInfoDataManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) IESWCDatabase *database;
@property (copy, nonatomic) NSString *currentLoginUserUid;
@property (nonatomic) BOOL isWCDBToTwo;
@property (nonatomic) BOOL traceError;
@property (nonatomic) BOOL enableWCDBCrashOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transformDiskCacheWithUid:(id)a0 newPath:(id)a1;
+ (void)transformDiskCacheWithUid:(id)a0 oldPath:(id)a1;
+ (id)dbFilePath;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)__async:(id /* block */)a0;
- (void)dbInitForWCDBTwo;
- (void)dbInitForWCDBOne;
- (void)__prepare;
- (id)__sync:(id /* block */)a0;
- (id)fansTagsModelWithCid:(id)a0 secUid:(id)a1;
- (id)fansClubModelsWithCid:(id)a0 secUid:(id)a1;
- (id)liveFansSubscriptionDateModelWithCid:(id)a0 secUid:(id)a1;
- (id)activeModelsWithCid:(id)a0 secUid:(id)a1;
- (BOOL)deleteAllDataWithSecUids:(id)a0 filterCid:(id)a1;
- (id)allActiveModelsWithCid:(id)a0;
- (id)allFansClubModelsWithCid:(id)a0;
- (id)allFansTagsModelWithCid:(id)a0;
- (id)allLiveFansSubscriptionDateModelWithCid:(id)a0;
- (id)activeTagConfsWithCid:(id)a0;
- (id)inactiveThresholdConfsWithCid:(id)a0;
- (id)fansClubIconConf;
- (id)liveFansClubIconConfig;
- (id)purchasedFansClubIconConfig;
- (BOOL)deleteActiveDataWithSecUids:(id)a0 filterCid:(id)a1;
- (id)lastUpdateDateForDailyUpdateWithCid:(id)a0;
- (id)lastUpdateInfoForFansClubWithCid:(id)a0;
- (BOOL)saveObjects:(id)a0;
- (id)lastUpdateInfoForFansTagsWithCid:(id)a0;
- (BOOL)deleteAllObjectsWithModelClass:(Class)a0 filterCid:(id)a1;
- (BOOL)deleteFansClubIconConf;
- (BOOL)deleteLiveFansClubIconConfig;
- (BOOL)deletePurchasedFansClubIconConfig;
- (BOOL)syncAllObjectsThatHaveSameGroupOwnerUidWithObject:(id)a0;
- (BOOL)deleteGroupParticipantBizInfoModelWithOption:(unsigned long long)a0 filterCid:(id)a1;
- (BOOL)__createTableWithDatabase:(id)a0;
- (BOOL)createWCDBTwo;
- (void)__clearCurrentLoginUserFansClubLevelForTrackingWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
