@interface KaraSessionFlowHistoryTable : KaraHistoryTable

- (id)initWithPath:(id)a0 tableName:(id)a1;
- (long long)updateRecordThatRecalled:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (id)historyWhereDestination:(long long)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;

@end
