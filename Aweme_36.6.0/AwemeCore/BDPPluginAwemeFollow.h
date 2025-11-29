@class NSString, BDPUniqueID;

@interface BDPPluginAwemeFollow : BDPBridgeInstancePlugin

@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentId;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)followAwemeUserProcessWithUniqueID:(id)a0 awemeId:(id)a1 secId:(id)a2 uid:(id)a3 limitMaxShowNumber:(long long)a4 callback:(id /* block */)a5;
- (void)followAwemeUserProcessWithUniqueID:(id)a0 expand:(id)a1 openId:(id)a2 awemeId:(id)a3 secId:(id)a4 uid:(id)a5 limitMaxShowNumber:(long long)a6 callback:(id /* block */)a7;
- (void)followResultTracker:(id)a0 state:(long long)a1 nickeName:(id)a2 awemeID:(id)a3 error:(id)a4;
- (void)sendFollowSuccessEventWithUniqueID:(id)a0 awemeId:(id)a1 extraDict:(id)a2;
- (void)innerFollowAwemeUserProcessWithUniqueID:(id)a0 uid:(id)a1 suid:(id)a2 awemeId:(id)a3 type:(long long)a4 callback:(id /* block */)a5;
- (void)openAwemeUserProfileProcessWithUid:(id)a0 suid:(id)a1 hasCallback:(BOOL)a2 authorizatinIsNeeded:(BOOL)a3 uniqueID:(id)a4 callback:(id /* block */)a5;
- (void)checkFollowAwemeStateProcessWithUniqueID:(id)a0 awemeId:(id)a1 suid:(id)a2 uid:(id)a3 callback:(id /* block */)a4;
- (void)wukongCheckFollowAwemeStateProcessWithUniqueID:(id)a0 awemeId:(id)a1 suid:(id)a2 uid:(id)a3 callback:(id /* block */)a4;
- (void)insertFollowAwemeUserCardProcessWithParam:(id)a0 metaUid:(id)a1 metaSuid:(id)a2 aweID:(id)a3 authorizatinIsNeeded:(BOOL)a4 callback:(id /* block */)a5 instance:(id)a6 uiqueID:(id)a7;
- (void)sendErrorEventWithErrorCode:(long long)a0;
- (double)getActualYWithScroll:(id)a0 param:(id)a1;
- (id)generateUserFollowCardInfoWithFixedPosition:(BOOL)a0 pageID:(long long)a1 uid:(id)a2 secUserId:(id)a3 awemeId:(id)a4 componentId:(id)a5 param:(id)a6 followUserCard:(id)a7;
- (id)updateExistedCardInSubviews:(id)a0 userId:(id)a1 isFollowing:(BOOL)a2;
- (void)updateFollowAwemeUserCardProcessWithParam:(id)a0 awemeId:(id)a1 capacityName:(id)a2 callback:(id /* block */)a3 instance:(id)a4 uiqueID:(id)a5;
- (id)findExistedCardInSubviews:(id)a0 componentId:(id)a1;
- (void)openUserProfileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)followAwemeUserWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerFollowAwemeUserWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openAwemeUserProfileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkFollowAwemeStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkFollowAwemeStateWithWukongModel:(id)a0 instance:(id)a1 callback:(id /* block */)a2;
- (void)innerCheckFollowAwemeStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertFollowAwemeUserCardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateFollowAwemeUserCardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeFollowAwemeUserCardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
