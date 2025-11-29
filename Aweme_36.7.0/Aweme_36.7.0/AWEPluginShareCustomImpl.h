@class NSString, NSArray, BDPUniqueID, BDPSharePrepareModel, AWEShareGameModel, NSDictionary, NSMutableArray, AWEAnchorCustomTitleViewController;

@interface AWEPluginShareCustomImpl : NSObject <BDPSharePluginDelegate, AWEIronManShareTaskMessage, AWEPublishTaskMessage, AWEStudioPublishPathMessage, AWEIMShareSendMessage>

@property (retain, nonatomic) AWEShareGameModel *model;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *morePanelShareText;
@property (copy, nonatomic) NSString *actualChannel;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *currentChannel;
@property (retain, nonatomic) BDPSharePrepareModel *prepareModel;
@property (retain, nonatomic) AWEAnchorCustomTitleViewController *customizedTitleController;
@property (retain, nonatomic) NSMutableArray *shareModelArray;
@property (copy, nonatomic) NSArray *usersToShare;
@property (copy, nonatomic) NSArray *recentContacts;
@property (copy, nonatomic) NSDictionary *shareResultDict;
@property (nonatomic) BOOL isUploadingUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)dynamicCastProtocol:(id)a0;
- (void)didSendMessage;
- (void)ironManShareWithChannel:(id)a0 shareResultType:(long long)a1 ext:(id)a2;
- (void)ironManVideoPublishResult:(BOOL)a0;
- (void)ironManShareWithChannel:(id)a0 shareResultType:(long long)a1;
- (void)willSendIMShareMessageWithContext:(id)a0;
- (void)didCancelSendMessage;
- (void)publishFinishWithType:(unsigned long long)a0;
- (void)bdp_specialShareWithResultModel:(id)a0 channel:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)shareTaskDone;
- (void)decidedDefaultShareWith:(id)a0;
- (void)asyncProcessIMBigCardShare:(id)a0 andCompleteHandler:(id /* block */)a1;
- (id)getShareContextWithResult:(id)a0;
- (id)getShareList;
- (void)sendShareResultEventWithUniqueID:(id)a0 shareList:(id)a1 cancelShare:(BOOL)a2 additionalInfo:(id)a3;
- (void)uploadUserInfoWithPrepareModel:(id)a0 type:(id)a1 IMshareList:(id)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
- (void)_shareToStoryWithProcessModel:(id)a0;
- (id)blockChannelsForUniqueID:(id)a0;
- (id)getRecentContacts;
- (id)getAllModelsWithArray:(id)a0;
- (BOOL)containsCurrentShareModelWithName:(id)a0 iconURL:(id)a1 isStranger:(BOOL)a2;
- (void)setUpPreciseFollowStatusWithName:(id)a0 iconURL:(id)a1 isStanger:(BOOL)a2;
- (void)bdp_specialShareWithPrepareModel:(id)a0 resultModel:(id)a1 channel:(id)a2 uniqueID:(id)a3 completion:(id /* block */)a4;
- (void)shareAppMessage:(id)a0 onChannel:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)shareQRCodeWithMessage:(id)a0 appID:(id)a1 screenShot:(BOOL)a2;
- (id)anchorInfoWithModel:(id)a0;
- (id)generateVideoPublishParams:(id)a0;
- (unsigned long long)getVideoPermissionAB:(id)a0;
- (void)showEditorWithModel:(id)a0 info:(id)a1;
- (void)createCutSameMVTemplateWithTemplateId:(id)a0 withModel:(id)a1 withInfo:(id)a2 appID:(id)a3 didComplete:(id /* block */)a4;
- (void)createVideoWithModel:(id)a0 withInfo:(id)a1 appID:(id)a2;
- (id)generateLiveShareParam:(id)a0;
- (BOOL)shouldReplaceAnchorMessage:(id)a0;
- (void)startVideoWithStickerID:(id)a0 model:(id)a1 info:(id)a2 appID:(id)a3;
- (BOOL)needHandleMessage;
- (id)getUserInfoWithExt:(id)a0;
- (id)bdp_shareSchemaPrefix;
- (void)bdp_defaultShareWithPrepareModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_anchorCustomizeTitleWithResultModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)bdp_getShareChannelBlockList;
- (BOOL)bdp_checkAbilityEnable;
- (void)bdp_getMorePanelShareRecentContactModelWithCompletion:(id /* block */)a0;
- (void)bdp_getMorePanelShareFriendModelWithCompletion:(id /* block */)a0;
- (void)bdp_morePanelShareSeparatelyWithUsers:(id)a0 shareText:(id)a1;
- (void)bdp_setUpCorrectShareFollowStatus:(id /* block */)a0;
- (BOOL)bdp_currentUserHasNoFriends;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
