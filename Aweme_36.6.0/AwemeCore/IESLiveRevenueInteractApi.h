@interface IESLiveRevenueInteractApi : HTSLiveApi

- (id)abMapJsonString;
- (void)battleRivalsWithEntrance:(unsigned long long)a0 tabType:(int)a1 openTabName:(id)a2 recommendType:(int)a3 roomID:(id)a4 callback:(id /* block */)a5;
- (void)getBattleChooseListWithChannelID:(id)a0 isPKing:(BOOL)a1 panelScene:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)pkRecordWithOffset:(long long)a0 count:(long long)a1 fromType:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)battleReserveRecordWithOffset:(id)a0 tabType:(unsigned long long)a1 limit:(long long)a2 offsetID:(id)a3 callback:(id /* block */)a4;
- (void)setInteractScoreShowStatus:(BOOL)a0 channelID:(id)a1 roomID:(id)a2 callback:(id /* block */)a3;
- (void)resetInteractScoreWithChannlID:(id)a0 roomID:(id)a1 battleID:(id)a2 callback:(id /* block */)a3;
- (void)updateLinkmicConfig:(id)a0 configId:(id)a1 forbidOthersInvite:(BOOL)a2 forbidOthersApply:(BOOL)a3 callback:(id /* block */)a4;

@end
