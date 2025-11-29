@class WCTDatabase, NSString, WCTTable;

@interface EnterpriseContactDB : MMObject {
    WCTDatabase *m_db;
    WCTTable *m_friendTable;
    WCTTable *m_myTable;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)closeDB;
- (BOOL)runTransaction:(id /* block */)a0;
- (id)getContact:(id)a0;
- (id)getAllContacts;
- (BOOL)addContact:(id)a0;
- (BOOL)batchAddContact:(id)a0;
- (BOOL)updateContact:(id)a0;
- (BOOL)deleteContact:(id)a0;
- (id)getMyContact;
- (BOOL)setMyContact:(id)a0;
- (void)deleteMyContact;
- (void)deleteDB;
- (id)getTableByName:(id)a0;
- (void).cxx_destruct;

@end
