@class AWEIMBatchUpdateManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMRefactorLoginManager : NSObject <IESIMLoginManagerDelegate>

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) AWEIMBatchUpdateManager *batchUpdateManger;
@property (nonatomic) BOOL disableLiveConsult;
@property (nonatomic) double currentFreeDiskSpace;
@property (readonly, nonatomic) BOOL shouldMigrateStorageToKv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMModuleConfigAdapterProtocolClass;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)sharedInstance;

- (double)freeDiskSpace;
- (void)p_getFreeDiskSpace;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)p_modifiedGroupTypesEnabledInFoldBox;
- (id)p_lcMessageHandleAllowedSourceArray;
- (id)rebuildErrorCode;
- (BOOL)hasLogin;
- (void)iesim_fetchRemoteTokenWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)currentSDKUid;
- (id)p_storageKeyWithIdenifier:(id)a0;
- (void)logoutIMServiceWithClearDB:(BOOL)a0;
- (long long)p_foldGroupChatExpOptionLocalValueWithUid:(id)a0;
- (id)p_chatDemoteStrategyExpLocalDictWithUid:(id)a0;
- (void)loginIMServiceWithContext:(id)a0;
- (BOOL)shouldInitIMSDK;
- (BOOL)p_enableIMCoreSDKInitRefactor;
- (id)optionsWithContext:(id)a0;
- (void)configMsgDBRebuild;
- (void)__injectDBBatchUpdateProcessers;
- (void)p_setFoldGroupChatExpOptionLocalValue:(long long)a0 forUid:(id)a1;
- (void)p_setChatDemoteStrategyExpLocalDict:(id)a0 forUid:(id)a1;
- (void)fetchRemoteTokenWithContext:(id)a0 completion:(id /* block */)a1;
- (id)iesim_passportToken;
- (void)logoutIMService;
- (void).cxx_destruct;
- (id)init;
- (id)loginManager;

@end
