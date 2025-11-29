@class NSNumber, NSString;

@interface HTSLivePKApi : HTSLiveApi <IESLiveRevenueInteractFeedbackAPI>

@property (retain, nonatomic) NSNumber *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomID:(id)a0;
- (void)requestRecommendAreaActionWithActionType:(long long)a0 activityId:(id)a1 callback:(id /* block */)a2;
- (void)searchForSuggestWordsWith:(id)a0 callback:(id /* block */)a1;
- (void)searchForResultWith:(id)a0 offset:(long long)a1 count:(long long)a2 searchID:(id)a3 searchScene:(long long)a4 callback:(id /* block */)a5;
- (id)stringValueForScene:(unsigned long long)a0;
- (void)battleRivalsWithEntrance:(unsigned long long)a0 tabType:(int)a1 openTabName:(id)a2 recommendType:(int)a3 recommendSelectType:(int)a4 loadType:(long long)a5 isFirst:(BOOL)a6 requestSource:(id)a7 activityId:(id)a8 callback:(id /* block */)a9;
- (id)abMapJsonString;
- (void)fetchFeedbackCategoriesAtScene:(unsigned long long)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)uploadFeedbackWithScene:(unsigned long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)autoMatchWithFirst:(BOOL)a0 matchType:(id)a1 subType:(id)a2 isHighWay:(BOOL)a3 speedLevel:(long long)a4 preferNewAnchor:(BOOL)a5 extraParams:(id)a6 finished:(id /* block */)a7;
- (void)replyBattleReserveInvite:(unsigned long long)a0 inviteUserID:(id)a1 inviteRoomID:(id)a2 currentRoomID:(id)a3 reserveID:(id)a4 extraParams:(id)a5 finished:(id /* block */)a6;
- (void)rejectBattleReserveSettle:(unsigned long long)a0 toUserID:(id)a1 toRoomID:(id)a2 reserveID:(id)a3 extraParams:(id)a4 finished:(id /* block */)a5;
- (void)cancelAutoMatchWithMatchType:(long long)a0 completion:(id /* block */)a1;
- (void)rejectAutoMatchInvite:(unsigned long long)a0 inviteUserID:(id)a1 roomID:(id)a2 extraParams:(id)a3 callback:(id /* block */)a4;
- (void)getBattleSettingsWithRoomID:(id)a0 userID:(id)a1 secUid:(id)a2 settingScene:(unsigned long long)a3 callback:(id /* block */)a4;
- (void)updateBattleSettings:(id)a0 withRoomID:(id)a1 secUid:(id)a2 callback:(id /* block */)a3;
- (void)battleRivalsWithEntrance:(unsigned long long)a0 tabType:(int)a1 openTabName:(id)a2 recommendType:(int)a3 callback:(id /* block */)a4;
- (void)pkBlockListWithType:(long long)a0 roomId:(id)a1 userId:(id)a2 cursor:(id)a3 count:(long long)a4 callback:(id /* block */)a5;
- (void)getBattleConfigWith:(int)a0 callback:(id /* block */)a1;
- (void)replyPrecisionMatchWithOption:(int)a0 source:(int)a1 precisionMatchID:(id)a2 activityID:(id)a3 notDisturb:(BOOL)a4 callback:(id /* block */)a5;
- (void).cxx_destruct;

@end
