@interface KaraLiveHomePageHistoryTable : KaraHistoryTable

- (id)initWithPath:(id)a0 tableName:(id)a1;
- (id)historyWhereUnreadAtOtherCell:(BOOL)a0 badgeAtOtherCell:(BOOL)a1 atSlot:(id)a2 happenedBetween:(id)a3 to:(id)a4 limit:(long long)a5 error:(id *)a6;
- (id)historyWhereAnchor:(id)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;

@end
