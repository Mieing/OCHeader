@class NSSet, NSString, NSMutableSet, NSMutableArray, BypSyncKeyBuff;

@interface BypSyncService : MMUserService <MMKernelExt, INewSyncPluginExt, PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSSet *allKnownSelectors;
@property (retain, nonatomic) BypSyncKeyBuff *syncBuff;
@property (retain, nonatomic) NSMutableArray *syncingSelectors;
@property (nonatomic) int syncingScene;
@property (nonatomic) int lastSyncScene;
@property (retain, nonatomic) NSMutableSet *needSyncSelectors;
@property (nonatomic) BOOL enableBypSync;
@property (nonatomic) int retryCount;
@property (nonatomic) unsigned long long firstAuthTime;
@property (nonatomic) BOOL syncPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)IsSupportMsgItemTypeWithSyncKeyType:(int)a0;
+ (id)parseMsgWrapFromBypSyncItem:(id)a0;

- (void)dealloc;
- (id)init;
- (void)config;
- (void)startSyncFinder;
- (void)updatePayBypSyncSelectorEnabled:(BOOL)a0;
- (void)updateAllKnownSelectors:(id)a0;
- (void)syncWithNotifyData:(id)a0;
- (void)syncWithActionNotifyData:(id)a0;
- (void)syncWithSelectors:(id)a0 syncAll:(BOOL)a1 scene:(int)a2;
- (id)syncBufferFilePath;
- (void)saveSyncKeyBuff;
- (id)descStringForSyncBuffer:(id)a0;
- (void)checkQueue;
- (BOOL)isSyncing;
- (void)createSyncEventWithSelectors:(id)a0 scene:(int)a1;
- (void)tryRetrySync;
- (void)onSyncSuccessedWithResponse:(id)a0;
- (void)onSyncFailed;
- (id)mergeSyncBuffer:(id)a0 newBuffer:(id)a1;
- (BOOL)isSyncBufferEqualsFrom:(id)a0 toBuffer:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onAuthOK;
- (void)NotifyCheckSelector;
- (void).cxx_destruct;

@end
