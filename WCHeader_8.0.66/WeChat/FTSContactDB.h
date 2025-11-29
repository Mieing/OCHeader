@class FTSDB;

@interface FTSContactDB : NSObject {
    FTSDB *_database;
}

- (BOOL)initDB:(id)a0;
- (BOOL)dropAllIndex;
- (BOOL)existValidIndexOfContact:(id)a0;
- (BOOL)existIndex;
- (unsigned int)getIndexCount;
- (BOOL)insertOrUpdateIndexForContacts:(id)a0 updateCount:(unsigned int *)a1 indexRecord:(id)a2;
- (BOOL)deleteIndexForContacts:(id)a0 indexRecord:(id)a1;
- (BOOL)deleteIndexForUsername:(id)a0 indexRecord:(id)a1;
- (id)searchContact:(id)a0 contactType:(int)a1 withHelper:(id)a2 andCancelBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
