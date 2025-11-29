@class NSString, NSMutableDictionary, NSMutableSet, BDPFollowAwemeUserView;

@interface AWEPluginFollowCustomImpl : NSObject <AWELiveRoomMessage, BDPAwemeFollowPluginDelegate, AWEUserDetailViewControllerMessage, BDPAppInterfaceOrientationChangeMessage>

@property (nonatomic) BOOL usingLivePreview;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *suid;
@property (copy, nonatomic) NSString *enterForm;
@property (copy, nonatomic) id /* block */ delayAction;
@property (retain, nonatomic) NSMutableSet *followStateChecking;
@property (nonatomic) unsigned long long originalOrientation;
@property (retain, nonatomic) NSMutableDictionary *completeBlocks;
@property (retain, nonatomic) NSMutableDictionary *followStatusDic;
@property (retain, nonatomic) BDPFollowAwemeUserView *followUserView;
@property (copy, nonatomic) id /* block */ enterCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (void)userDetailViewControllerLastUserStatus:(id)a0;
- (void)cancelButtonClick:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)clearFollowAwemeLimit;
- (void)handleWithUser:(id)a0 error:(id)a1 complete:(id /* block */)a2;
- (long long)bdpFollwStateForAwemeFollowState:(long long)a0;
- (void)showFollowSuccessViewForAppID:(id)a0;
- (void)followAwemeUser:(id)a0 appID:(id)a1 complete:(id /* block */)a2;
- (void)addComplete:(id /* block */)a0 forUid:(id)a1;
- (void)unfollowAwemeUser:(id)a0 appID:(id)a1 complete:(id /* block */)a2;
- (void)showAlreadyFollowingViewForAppID:(id)a0;
- (BOOL)checkLimitMaxPopupShowNumber:(long long)a0 withUniqueID:(id)a1;
- (void)showFollowFailViewForAppID:(id)a0;
- (void)showFollowAwemeUserPopupForAppID:(id)a0 userModel:(id)a1 complete:(id /* block */)a2;
- (void)innerFollowAwemeUser:(id)a0 uniqueID:(id)a1 complete:(id /* block */)a2;
- (void)innerUnfollowAwemeUser:(id)a0 uniqueID:(id)a1 complete:(id /* block */)a2;
- (long long)hgFollwStateForAwemeFollowState:(long long)a0;
- (void)showFollowCheckViewForAppID:(id)a0 userModel:(id)a1 complete:(id /* block */)a2;
- (void)getAwemeUserInfo:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)trackFollowPopClickResultWithUniqueId:(id)a0 awemeId:(id)a1 nickname:(id)a2 uid:(id)a3 resultType:(id)a4;
- (void)exucteCompleteForUid:(id)a0 withFollowState:(long long)a1;
- (void)openAwemeUserProfileFromUI:(id)a0;
- (id)avatarURLWithUserItem:(id)a0;
- (id)getVerifyStatusImageNameWithModel:(id)a0;
- (void)followButtonClick:(id)a0;
- (void)avatarButtonClick:(id)a0;
- (void)bdp_openAwemeUserProfileForUid:(id)a0 securityUid:(id)a1 enterFrom:(id)a2 complete:(id /* block */)a3;
- (void)trackFollowPopClickWithUniqueId:(id)a0 awemeId:(id)a1 nickname:(id)a2 uid:(id)a3 btnName:(id)a4;
- (void)newFollowAwemeUser:(id)a0 appID:(id)a1 complete:(id /* block */)a2;
- (void)bdp_openAwemeUserProfileForUid:(id)a0 securityUid:(id)a1 enterFrom:(id)a2 appID:(id)a3 complete:(id /* block */)a4;
- (void)bdp_checkFollowAwemeStateForUid:(id)a0 securityUid:(id)a1 appID:(id)a2 complete:(id /* block */)a3;
- (void)bdp_checkFollowAwemeStateForUniqueID:(id)a0 awemeId:(id)a1 suid:(id)a2 uid:(id)a3 complete:(id /* block */)a4;
- (void)bdp_awemeUserCardWithUniqueID:(id)a0 awemeId:(id)a1 suid:(id)a2 uid:(id)a3 complete:(id /* block */)a4;
- (void)bdp_followAwemeUserForUid:(id)a0 securityUid:(id)a1 appID:(id)a2 complete:(id /* block */)a3;
- (void)bdp_unfollowAwemeUserForUid:(id)a0 securityUid:(id)a1 appID:(id)a2 complete:(id /* block */)a3;
- (void)bdp_followAwemeUserWithUIForUniqueID:(id)a0 awemeId:(id)a1 secId:(id)a2 uid:(id)a3 enterForm:(id)a4 limitMaxShowNumber:(long long)a5 complete:(id /* block */)a6;
- (void)bdp_innerFollowAwemeUserWithUid:(id)a0 securityUid:(id)a1 awemeId:(id)a2 type:(long long)a3 appID:(id)a4 complete:(id /* block */)a5;
- (void)bdp_openUserProfileWithParam:(id)a0 appID:(id)a1 complete:(id /* block */)a2;
- (void)bdp_openAwemeUserProfileV2ForUid:(id)a0 securityUid:(id)a1 uniqueID:(id)a2 complete:(id /* block */)a3;
- (void)bdp_getAwemeUserInfo:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_followAwemeUserUniqueID:(id)a0 UserID:(id)a1 complete:(id /* block */)a2;
- (void)bdp_addComplete:(id /* block */)a0 forUid:(id)a1;
- (void)bdp_checkFollowAwemeStatePreviewLayerWithUIForUid:(id)a0 uniqueID:(id)a1 complete:(id /* block */)a2;
- (void)bdp_enterLiveRoomStatusWithComplete:(id /* block */)a0;
- (void)handleWithUser:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)bdp_checkFollowAwemeStateWithUIForUid:(id)a0 securityUid:(id)a1 appID:(id)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
