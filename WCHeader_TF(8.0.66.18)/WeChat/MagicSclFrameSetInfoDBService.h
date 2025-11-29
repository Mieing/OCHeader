@class NSString, WCTDatabase, WCTTable;

@interface MagicSclFrameSetInfoDBService : MMUserService <MMServiceProtocol> {
    WCTDatabase *_db;
    WCTTable *_frameSetInfoTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)updateHeightForBizName:(id)a0 frameSetName:(id)a1 path:(id)a2 newHeight:(int)a3;
- (int)getHeightForBizName:(id)a0 frameSetName:(id)a1 path:(id)a2;
- (void)reInit;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void).cxx_destruct;

@end
