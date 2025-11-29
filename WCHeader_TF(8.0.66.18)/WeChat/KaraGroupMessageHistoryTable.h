@interface KaraGroupMessageHistoryTable : KaraHistoryTable

- (id)initWithPath:(id)a0 tableName:(id)a1;
- (id)historyInSession:(id)a0 atSlot:(id)a1 happenedBetween:(id)a2 to:(id)a3 limit:(long long)a4 error:(id *)a5;
- (id)historyInSession:(id)a0 fromSender:(id)a1 atSlot:(id)a2 happenedBetween:(id)a3 to:(id)a4 limit:(long long)a5 error:(id *)a6;
- (id)historyOfWeComSenderAtSlot:(id)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;
- (id)historyOfWeComGroupChatAtSlot:(id)a0 happenedBetween:(id)a1 to:(id)a2 limit:(long long)a3 error:(id *)a4;

@end
