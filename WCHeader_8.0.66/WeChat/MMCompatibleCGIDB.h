@class WCTDatabase, WCTTable;

@interface MMCompatibleCGIDB : MMObject {
    WCTDatabase *m_compatibleCGIDB;
}

@property (retain) WCTTable *m_tableCompatibleCGI;

- (void)CreateTables;
- (void)ReloadDatabase;
- (id)CreateTableWithName:(id)a0 tableClass:(Class)a1;
- (id)GetCompatibleCGIDBRootDir;
- (id)GetCompatibleCGIDBPath;
- (id)GetCompatibleCGIDataById:(id)a0;
- (BOOL)DeleteCompatibleCGIDataById:(id)a0;
- (BOOL)insertOrReplaceCompatibleCGIData:(id)a0;
- (void).cxx_destruct;

@end
