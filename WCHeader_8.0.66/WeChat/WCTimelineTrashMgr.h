@class MMTimer, NSMutableDictionary, NSString;

@interface WCTimelineTrashMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *trashMap;
@property (retain, nonatomic) NSMutableDictionary *idMap;
@property (retain, nonatomic) NSMutableDictionary *exposeMap;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadCacheFromFile:(id)a0;
- (void)dealloc;
- (void)throwIntoTrash:(id)a0;
- (id)getTrashPlaceHolderItem;
- (void)copyToTrash:(id)a0 draftController:(id)a1 trashReportData:(id)a2;
- (void)copyToTrash:(id)a0 draftController:(id)a1 forwardItem:(id)a2 trashReportData:(id)a3;
- (void)recoverDataForTrashModel:(id)a0 fromDataItem:(id)a1;
- (id)recoverDraftFromTrash:(id)a0 forwardItem:(id *)a1 reportData:(id *)a2;
- (void)updateTrashModelWithLocalItem:(id)a0 andSvrItem:(id)a1;
- (BOOL)updateTrashModelForDataItem:(id)a0 withSightDraft:(id)a1;
- (void)clearAllDisplayCanReEditItem;
- (void)clearTrashWithItemID:(id)a0;
- (id)getReferenceImageFiles;
- (void)recordExpose:(id)a0;
- (void)tryReportExpose;
- (void)reportClick:(id)a0 nextAction:(unsigned int)a1;
- (id)getCanReEditModel;
- (id)getSessionId:(unsigned long long)a0;
- (void)clearAllExpiredRecyclableItem;
- (void)clearExpiredRecyclableItem:(id)a0;
- (id)clearExpiredRecyclableArchive;
- (void)clearAllDisplayCanReEditItemAndReloadIfNeeded:(BOOL)a0 shouldCleanLocalData:(BOOL)a1;
- (void)removeModelWithLocalId:(id)a0 svrId:(id)a1 shouldCleanLocalData:(BOOL)a2;
- (void)startTimerCheckIfNeeded;
- (void)stopTimerCheck;
- (void)clearExpiredDisplayCanReEditItemIfNeeded;
- (id)genReportData:(id)a0;
- (BOOL)isEnable;
- (id)extraImageDraftPaths:(id)a0;
- (void).cxx_destruct;

@end
