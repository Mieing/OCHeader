@interface KaraMomentHistoryTable : KaraHistoryTable

- (id)initWithPath:(id)a0 tableName:(id)a1;
- (id)historyOfUser:(id)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyOfWeishangAtSlot:(id)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;
- (id)historyAtCityOfPOI:(id)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyOfFeedWeishangType:(long long)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyOfSellerWeishangType:(long long)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyOfFeedWeishangStatus:(long long)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyOfMiaojianTemplateAtSlot:(id)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;
- (id)recalledRecordsHappenedBetween:(id)a0 to:(id)a1 limit:(long long)a2 error:(id *)a3;

@end
