@class NSString;

@interface ChatBotSnapLinksMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)hasStarData;
- (unsigned int)getStarCount;
- (BOOL)hasSnapshotInfo;
- (id)genDataIdWithIndex:(unsigned int)a0;
- (void)insertTraceItem:(id)a0 complete:(id /* block */)a1;
- (id)minimizedTaskRecordsWithDataChangeDelegate:(id)a0;
- (void)saveImageAsTraceDataInBackground:(id)a0 completion:(id /* block */)a1;
- (void)getAllTraceItemWithType:(int)a0 completeHandle:(id /* block */)a1;

@end
