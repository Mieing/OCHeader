@interface KaraHistoryTable : WCDBTableHolder {
    Class WINQ;
}

- (id)initWithPath:(id)a0 tableName:(id)a1 tableClass:(Class)a2;
- (long long)insertOrIgnoreRecord:(id)a0 error:(id *)a1;
- (long long)updateRecordThatRecalled:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)deleteRecordsHappenedBefore:(id)a0 error:(id *)a1;
- (long long)deleteRecord:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (id)recordsOnResultColumns:(const void *)a0 where:(const void *)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (long long)updateRecordThatRecalled:(id)a0 includeProperties:(const void *)a1 happenedAfter:(id)a2 error:(id *)a3;
- (id)historyWhere:(const void *)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;
- (id)historyWhere:(const void *)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyAtSlot:(id)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;
- (long long)pagesWithError:(id *)a0;

@end
