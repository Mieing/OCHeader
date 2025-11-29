@class BDPPopLimitInfo, BDPUniqueID, BDPThreadSafeDictionary;
@protocol BDPKVInterface;

@interface BDPSubscribeStorage_HG : NSObject {
    BDPPopLimitInfo *_popLimitInfo;
    BDPThreadSafeDictionary *_allTemplateInfoDict;
    BDPThreadSafeDictionary *_userSubscribeDict;
    BDPThreadSafeDictionary *_permissionViewInfo;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> storageBackup;
@property (nonatomic) unsigned long long mainSwitch;
@property (retain, nonatomic) BDPThreadSafeDictionary *templateIDLastAlertTimeDic;

- (void)fetchAllSubscribeInfoIfNeeded:(id /* block */)a0;
- (id)initWithUniqueID:(id)a0 storage:(id)a1;
- (void)updateBackupStorage:(id)a0;
- (id)getUserAllSubscriptionDict;
- (void)getTemplateDataIfNeededFor:(id)a0 completion:(id /* block */)a1;
- (void)updateSubscribeStatusWithUserSubscribeList:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)getUserSwitchForTemplate:(id)a0;
- (void)subscribeTemplateWithSubscriptionList:(id)a0 completion:(id /* block */)a1;
- (id)getInfoForTemplateType:(unsigned long long)a0 timesType:(unsigned long long)a1;
- (long long)getTemplateIDLastAlertTime:(id)a0;
- (BOOL)updateTemplateLastAlertTimeStorage:(id)a0;
- (BOOL)createUserSubscribeInfoInStorageWithUserMainSwitch:(unsigned long long)a0 longTermSubscribeList:(id)a1 timeStamp:(double)a2;
- (BOOL)updateStorageForTemplate:(id)a0 withTemplateInfo:(id)a1;
- (BOOL)updateStorageForSubscribePermissionViewInfo:(id)a0 withKey:(id)a1;
- (double)getUserLastFetchTimestamp;
- (void)loadSubscribeDataFromStorage;
- (void)loadTemplateIDLastAlertTimeIfNeed;
- (BOOL)updateStorageForTemplate:(id)a0 withStatus:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)getTemplateInfo:(id)a0;

@end
