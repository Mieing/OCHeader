@class NSMutableArray, BDPThreadSafeDictionary, BDPUniqueID, BDPPopLimitInfo;
@protocol BDPKVInterface;

@interface BDPSubscribeStorage : NSObject {
    BOOL _isUpdatingSubscribeStatus;
    BDPPopLimitInfo *_popLimitInfo;
    BDPThreadSafeDictionary *_allTemplateInfoDict;
    BDPThreadSafeDictionary *_userSubscribeSwitchDict;
    BDPThreadSafeDictionary *_permissionViewInfo;
    NSMutableArray *_updateSubscribeStatusCompletionList;
}

@property (nonatomic) BOOL enableUseLynxManage;
@property (nonatomic) BOOL lastEnableUseLynxManage;
@property (retain, nonatomic) id<BDPKVInterface> userStorage;
@property (nonatomic) BOOL feedSwitch;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> storageBackup;
@property (nonatomic) unsigned long long mainSwitch;

- (id)mainStorage;
- (BOOL)p_setStorageObject:(id)a0 forKey:(id)a1;
- (void)fetchAllSubscribeInfoIfNeeded:(id /* block */)a0;
- (id)initWithUniqueID:(id)a0 storage:(id)a1;
- (void)updateBackupStorage:(id)a0;
- (void)addUpdateSubscribeStatusCompletion:(id /* block */)a0;
- (id)getUserAllSubscriptionDict;
- (void)getTemplateDataIfNeededFor:(id)a0 completion:(id /* block */)a1;
- (void)updateSubscribeStatusWithUserSubscribeList:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)getUserSwitchForTemplate:(id)a0;
- (void)subscribeTemplateWithSubscriptionList:(id)a0 completion:(id /* block */)a1;
- (id)getInfoForTemplateType:(unsigned long long)a0 timesType:(unsigned long long)a1;
- (long long)parseServerErrorWithError:(id)a0;
- (void)updateLynxStorageEnable;
- (id)p_getStringValueFromStorageForKey:(id)a0;
- (id)p_getUserSubscribeInfoObjectFromStorage;
- (unsigned long long)requestSubVersion;
- (id)p_createRequestParamForUrlString:(id)a0 extraParams:(id)a1;
- (id)p_getSwitchObjectFromDic:(id)a0;
- (BOOL)createUserSubscribeInfoInStorageWithUserMainSwitch:(unsigned long long)a0 feedSwitch:(BOOL)a1 subscribeList:(id)a2 timeStamp:(double)a3;
- (BOOL)createUserSubscribeInfoInStorageWithUserMainSwitch:(unsigned long long)a0 longTermSubscribeList:(id)a1 timeStamp:(double)a2;
- (id)p_userStorageTemplateNoticeKey:(id)a0;
- (BOOL)updateStorageForTemplate:(id)a0 withTemplateInfo:(id)a1;
- (BOOL)updateStorageForSubscribePermissionViewInfo:(id)a0 withKey:(id)a1;
- (BOOL)p_setUserSubscribeInfoObject:(id)a0;
- (id)p_userStorageTemplateKey:(id)a0;
- (id)p_userStorageTemplateTitleKey:(id)a0;
- (id)p_userStorageTemplateAskedKey;
- (id)p_userStorageMainSwitchKey;
- (id)p_userStorageFeedSwithKey;
- (BOOL)p_setStorageJsonStringObject:(id)a0 forKey:(id)a1;
- (id)p_userSubscribeInfoStringKey;
- (double)getUserLastFetchTimestamp;
- (void).cxx_destruct;
- (id)getTemplateInfo:(id)a0;

@end
