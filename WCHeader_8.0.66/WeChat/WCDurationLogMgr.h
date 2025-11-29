@class MemoryMappedKV, NSString, WCDurationLogDB, WCDurationLogItem;

@interface WCDurationLogMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCDurationLogItem *currentLogItem;
@property (retain, nonatomic) WCDurationLogDB *dataBase;
@property (nonatomic) BOOL isUserLogoutInThisSession;
@property (retain, nonatomic) MemoryMappedKV *mmap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)report;
- (void)insertLogItemToMMap:(id)a0;
- (void)tryUploadAllItemInMMap;
- (void)uploadAllItemsInDB;
- (id)getFirstLogItemDesc;
- (id)getLogItemDescAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
