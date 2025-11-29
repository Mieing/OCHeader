@class WCTDatabase, WCTTable;

@interface EnterpriseBrandAttrDB : NSObject {
    WCTDatabase *_db;
    WCTTable *_table;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)closeDB;
- (id)getAttrByUserName:(id)a0;
- (BOOL)deleteAttrByUserName:(id)a0;
- (BOOL)setAttr:(id)a0 onProperties:(const void *)a1;
- (void).cxx_destruct;

@end
