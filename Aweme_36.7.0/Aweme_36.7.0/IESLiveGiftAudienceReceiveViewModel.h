@class NSArray, NSString, IESLiveMoreToolsSettingItem;
@protocol IESLiveGiftAudienceReceiveAPI, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftAudienceReceiveViewModel : NSObject <IESLiveAnchorMoreToolsAction, IESLiveAudienceMoreToolsAction, IESLiveDataSyncDelegate, IESLiveGiftRecipientAudienceReceiveSubInterface>

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveGiftAudienceReceiveAPI> giftAudienceReceiveApi;
@property (copy, nonatomic) NSArray *fetchedAudienceGiftReceiverList;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *audienceReceiveGiftSwitchItem;
@property (copy, nonatomic) id /* block */ realNameCertCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (id)recipientFromAudienceGiftReceiverListWithID:(id)a0;
- (void)addAudienceGiftReceiverWithRoomID:(id)a0 anchorID:(id)a1 audienceID:(id)a2 completion:(id /* block */)a3;
- (void)updateAnchorSideAudienceGiftAuthInfoWithRoomID:(id)a0 anchorID:(id)a1 authSwitch:(id)a2 completion:(id /* block */)a3;
- (BOOL)openAudienceReceiveGiftSettingWithAllMicExclusive:(BOOL)a0;
- (void)userSettingInfoFetched:(id)a0 error:(id)a1;
- (void)anchorMoreToolsPanelViewShow;
- (id)anchorSideAudienceGiftAuthInfo;
- (void)setAnchorSideAudienceGiftAuthInfo:(id)a0;
- (void)registerMessageProcesser;
- (void)fetchAnchorSideAudienceGiftAuthInfoWithRoomID:(id)a0 anchorID:(id)a1 completion:(id /* block */)a2;
- (void)fetchAudienceGiftReceiverListWithRoomID:(id)a0 anchorID:(id)a1 fetchFrom:(id)a2 completion:(id /* block */)a3;
- (BOOL)enableJSBAudienceGiftAuth;
- (void)p_requestAnchorSideAudienceGiftAuthInfoIfNeeds;
- (void)p_setupAudienceSideReceiveGiftSwitchItem;
- (id)p_audienceSideGiftAuthUserSetting;
- (void)p_loadRealNameCertPageWithFaceOnly:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_setAudienceSideGiftAuthUserSetting:(id)a0;
- (id)audienceSideReceiveGiftUserUniqueSettingKey;
- (void)handleAudienceGiftSyncData:(id)a0;
- (id)anchorSideAudienceReceiveGiftUniqueSettingKey;
- (BOOL)p_shouldAddAudienceSideReceiveGiftMoreToolsSettingItemWithUserSetting:(id)a0;
- (void)p_addAudienceSideReceiveGiftMoreToolsSettingItem;
- (void)p_removeAudienceSideReceiveGiftMoreToolsSettingItem;
- (void)fetchAudienceGiftReceiverListIfNeeded;
- (void)p_authenticationNofity:(id)a0;
- (void).cxx_destruct;

@end
