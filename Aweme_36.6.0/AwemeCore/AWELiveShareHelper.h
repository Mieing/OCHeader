@interface AWELiveShareHelper : NSObject

+ (void)shareWithInsideType:(long long)a0 contentModel:(id)a1 roomModel:(id)a2;
+ (void)fetchQRCodeImageWithType:(long long)a0 itemID:(id)a1 completion:(id /* block */)a2;
+ (void)updateLiveShareUserListStore;
+ (void)inviteFriendsToJoinChatChannelV2:(id)a0 inviteId:(id)a1 roomType:(id)a2 users:(id)a3 context:(id)a4;
+ (id)liveShareUserAndGroupListInStore;
+ (void)openChatChannel:(id)a0 withHeight:(double)a1 cornerRadii:(double)a2 showRecommond:(BOOL)a3 fetchModel:(id /* block */)a4 clickHandler:(id /* block */)a5 inviteInfo:(id /* block */)a6 shareUsersBlock:(id /* block */)a7 dismissBlock:(id /* block */)a8 showBlock:(id /* block */)a9 diContext:(id)a10;
+ (id)getShareModelWithRoom:(id)a0 shareContent:(id)a1;
+ (void)showSharePanelWithContentModel:(id)a0 roomModel:(id)a1 onViewController:(id)a2;
+ (void)showPreLiveSharePanelWithContentModel:(id)a0 roomModel:(id)a1 onViewController:(id)a2;
+ (void)shareLandscapeLiveWithContent:(id)a0 roomModel:(id)a1 withType:(id)a2;
+ (BOOL)checkShareChannelAvailable:(long long)a0 needToast:(BOOL)a1;
+ (void)spliceImageShareWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)openLiveBoardWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (id)shareUserListStoreKey;
+ (void)addTrackParamsToContentModel:(id)a0;
+ (void)adjustMappedRoom:(id)a0 withShareContent:(id)a1;
+ (id)livesdkShareEventPageWithType:(long long)a0;
+ (id)livesdkShareContentWithType:(long long)a0;
+ (id)chatChannelMessageSchema:(id)a0 roomModel:(id)a1;
+ (id)getParamsWithSharedUsers:(id)a0;

@end
