@interface AFDCloseFriendsNotesHelper : NSObject

+ (void)requestAwemeItemWithID:(id)a0 attemptCount:(long long)a1 completion:(id /* block */)a2;
+ (void)deleteMomentModel:(id)a0 completion:(id /* block */)a1;
+ (id)getAwemeWithItemId:(id)a0 preloadItem:(id)a1;
+ (id)getNotesVisibilityLabelWithUid:(id)a0 itemId:(id)a1 publishModel:(id)a2;
+ (id)getNotesTimeLabelWithNotesTTL:(id)a0 createTime:(id)a1;
+ (void)deleteNotesWithNotesInfo:(id)a0 uid:(id)a1 awemeModel:(id)a2 publishModel:(id)a3 begin:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)reportNotesHasReadWithItemId:(id)a0 uid:(id)a1;
+ (void)reportDraftNotesHasRead;
+ (void)trackVideoPlayWithNotesInfo:(id)a0 uid:(id)a1 awemeModel:(id)a2 publishModel:(id)a3 isHost:(BOOL)a4;
+ (long long)getNotesVisibleStatusWithUid:(id)a0 itemId:(id)a1 publishModel:(id)a2;
+ (void)reportAwemeStatsForMyNotesWithItemId:(id)a0;
+ (void)p_deleteNotesWithNotesInfo:(id)a0 uid:(id)a1 awemeModel:(id)a2 begin:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)p_deleteNotesWithNotesInfo:(id)a0 uid:(id)a1 awemeModel:(id)a2 publishModel:(id)a3 begin:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)createAwemeWithNotesInfo:(id)a0 awemeModel:(id)a1;
+ (void)deleteAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)trackMomentCacheUsage:(BOOL)a0;
+ (void)reportNotesHasReadWithAweme:(id)a0;

@end
