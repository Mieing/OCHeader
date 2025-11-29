@interface HTSLiveUserAPI : HTSLiveApi

@property (copy, nonatomic) id /* block */ userCallBack;

- (void)applyCustomerServiceForAdminOperationWithUserID:(id)a0 actionType:(long long)a1 roomID:(id)a2 scene:(id)a3 completion:(id /* block */)a4;
- (void)managerAnonymousUserWithRoomID:(id)a0 didSilence:(BOOL)a1 finished:(id /* block */)a2;
- (void)fetchUserAdminOperationInfoWithUserID:(id)a0 roomID:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)requestMyLiveTabWithTabID:(id)a0 queryIndex:(long long)a1 completion:(id /* block */)a2;
- (void)fetchUserSettingInfoWithSecTargetUserID:(id)a0 anchorID:(id)a1 roomID:(id)a2 completion:(id /* block */)a3;
- (void)updateUserSettingInfoWithUserID:(id)a0 RoomID:(id)a1 anchorID:(id)a2 hasUserGiftSwitch:(BOOL)a3 userGiftSwith:(id)a4 hasProfileStyle:(BOOL)a5 profileStyle:(id)a6 completion:(id /* block */)a7;
- (void)updateUserSettingInfoWithUserID:(id)a0 RoomID:(id)a1 anchorID:(id)a2 hasUserRelationSwitch:(BOOL)a3 userRelationSwith:(id)a4 completion:(id /* block */)a5;
- (void)fetchCurrentFaceEffectsInfoWithSecTargetUserID:(id)a0 anchorID:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)postNewFaceEffectsInfoWithAnchorID:(id)a0 faceValue:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)fetchUserInfoWithParams:(id)a0 tintTags:(id)a1 finished:(id /* block */)a2;
- (id)transformUserProfileExtraToUserExtra:(id)a0;
- (void)fetchBanUsers:(id)a0 offset:(id)a1 count:(id)a2 completion:(id /* block */)a3;
- (void)banUser:(id)a0 secUid:(id)a1 roomID:(id)a2 finished:(id /* block */)a3;
- (void)unbanUser:(id)a0 secUid:(id)a1 roomID:(id)a2 finished:(id /* block */)a3;
- (void)changeAdministrateStatus:(id)a0 secUserId:(id)a1 setAdmin:(BOOL)a2 roomID:(id)a3 anchorID:(id)a4 enterFromMerge:(id)a5 enterMethod:(id)a6 finished:(id /* block */)a7;
- (void)fetchAdministrators:(id)a0 secAnchorID:(id)a1 roomID:(id)a2 completion:(id /* block */)a3;
- (void)kickout:(id)a0 secUserId:(id)a1 roomID:(id)a2 finished:(id /* block */)a3;
- (void)fetchKickOutInfos:(id)a0 offset:(id)a1 count:(id)a2 completion:(id /* block */)a3;
- (void)unKickout:(id)a0 roomID:(id)a1 finished:(id /* block */)a2;
- (void)fetchUserInfo:(id)a0 secTargetUid:(id)a1 roomID:(id)a2 anchorID:(id)a3 secAnchorID:(id)a4 requestFrom:(id)a5 fromRoomEnter:(BOOL)a6 targetDisplayRole:(long long)a7 tintTags:(id)a8 finished:(id /* block */)a9;
- (void)fetchUserProfileWithParamsModel:(id)a0 completion:(id /* block */)a1;
- (void)changeFollowStatusToUser:(id)a0 secToUser:(id)a1 roomID:(id)a2 isFollow:(BOOL)a3 secAnchorID:(id)a4 anchorID:(id)a5 extraParams:(id)a6 completion:(id /* block */)a7;
- (void)selectUserProfileStyle:(id)a0 profileStyle:(long long)a1 smartSwitchEnabled:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
