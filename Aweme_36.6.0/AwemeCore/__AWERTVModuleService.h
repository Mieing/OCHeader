@class RTVVoipMonitor, RxTwoTuple, NSString;
@protocol RTVUserProfileManagerInterface, RxInjector, RTVXRModuleService, RTVInteractionConfigureManagerInterface, RTVSettingsManager;

@interface __AWERTVModuleService : HTSService <HTSService, AWERTVModuleService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVXRModuleService> rtvService;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RxTwoTuple *trackEnterConvIDAndMethod;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigMananger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)isFeedSharing;
- (BOOL)shouldDisplayIMPushOfSender:(id)a0 convID:(id)a1;
- (id)feedShareChatConversationID;
- (BOOL)isVoipRingtoneHasBeenSet;
- (void)addRingtoneUpdateObserver:(id /* block */)a0;
- (void)removeRingtoneObserver:(id /* block */)a0;
- (id)currentVoipRingtoneMusicId;
- (void)showVoipRingtoneDetailPanelWithMusicId:(id)a0 enablePlay:(BOOL)a1 extra:(id)a2;
- (void)showVoipRingtonePickerWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)showVoipRingtoneHistoryPickerPanelWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (BOOL)isSwitchLayoutAnimating;
- (BOOL)isVoipEnable;
- (BOOL)isInRTV;
- (BOOL)isSceneEnable;
- (void)preCreateMainAppIDEngine;
- (void)clearPreCreatedEngine;
- (BOOL)isCameraRelatedFunctionEnabled;
- (id)enterFromWithMsgConvID:(id)a0;
- (id)enterMethodWithMsgConvID:(id)a0;
- (void)messageListAppear:(BOOL)a0 withConvID:(id)a1;
- (BOOL)isRTVAudioEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isRTVVideoEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isDegradeByServerWithUid:(id)a0 isVideo:(BOOL)a1;
- (BOOL)viewIsNarrowVisible;
- (void)trackVoipEntranceShowStatusWithParams:(id)a0;
- (void)preCreateEngineWithAppid:(id)a0;
- (BOOL)isMircophoneRelatedFunctionEnabled;
- (id)rtvFeedCastVideoService;
- (BOOL)shouldDisplayIMPushForVoipMessageIsIn1to1Chat:(BOOL)a0;
- (id)fetchRemoteImageWithName:(id)a0;
- (id)fetchRemoteThemeImageWithName:(id)a0;
- (id)getStorage;
- (BOOL)isSupportPIP;
- (void)showInviteFriendsWithType:(long long)a0 maxCount:(long long)a1 completion:(id /* block */)a2;
- (int)sendScreenStreamSEIWithRoomId:(id)a0 withMessage:(id)a1 andRepeatCount:(int)a2;
- (BOOL)registerRTMMessageListener:(id)a0;
- (BOOL)unRegisterRTMMessageListener:(id)a0;
- (BOOL)registerRoomVolumeListener:(id)a0;
- (BOOL)unRegisterRoomVolumeListener:(id)a0;
- (void)__handleEnterMessageList:(id)a0;
- (void)__forceInitService;
- (unsigned long long)__convertScene:(unsigned long long)a0;
- (id)_showInviteFriendsWithType:(long long)a0 maxCount:(long long)a1;
- (void).cxx_destruct;

@end
