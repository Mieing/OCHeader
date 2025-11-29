@class NewLifeMMKVKeyModel;

@interface NewLifeSyncLogic : FinderCommonReddotSyncBaseLogic

@property (retain, nonatomic) NewLifeMMKVKeyModel *kvModel;

- (id)initWithKVModel:(id)a0;
- (void)setSyncBuffer:(id)a0;
- (void)setLastBuffer:(id)a0;
- (id)otherRelatedKeyPathList;
- (void)syncWithActionNotifyData:(id)a0;
- (void)syncWithSwitchToFinderUsername:(id)a0;
- (void)syncWithEnterScene;
- (void)syncWithScene:(unsigned int)a0;
- (void)addSyncTask:(id)a0;
- (void)onEndWithContinueFlag;
- (void)triggerEnterForForegroundSync;
- (void)triggerGlobalSearchSync;
- (void)triggerEnterDiscoverySync;
- (void)triggerEnterDiscoveryFinderSync;
- (void)triggerEnterDiscoveryTimeLineSync;
- (id)generateClientInfo;
- (BOOL)enableAffSyncLogic;
- (void).cxx_destruct;

@end
