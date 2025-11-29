@class NSString;

@interface AWEIMMessageListVOIPModule : AWEIMMessageListModule <AWEIMMessageListVOIPModuleInterface>

@property (nonatomic) BOOL singleAudioDidMounted;
@property (nonatomic) BOOL singleVideoDidMounted;
@property (nonatomic) BOOL groupAudioDidMounted;
@property (nonatomic) BOOL groupVideoDidMounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)didStartWatchVideoTogether:(id)a0;
- (void)didStartGameRoomEnterFrom:(long long)a0;
- (void)trackPlusPanelVOIPClickWithConversation:(id)a0 mediaType:(id)a1 clickFrom:(id)a2;
- (void)startAudioVoipEnterFrom:(long long)a0 extraAction:(unsigned long long)a1;
- (void)startAudioVoipEnterFrom:(long long)a0 extraAction:(unsigned long long)a1 extra:(id)a2;
- (void)startVideoVoipEnterFrom:(long long)a0 extraResource:(id)a1;
- (void)showGroupVoipInviteViewControllerWithRTVType:(long long)a0 enterFrom:(long long)a1 selfStickerID:(id)a2;
- (void)voipConfirmPopupBeforeStartWithEnterFrom:(long long)a0 clickFrom:(id)a1 cancelHandler:(id /* block */)a2;
- (void)startPlayRemoteRoomWithExtraInfo:(id)a0;
- (void)startSingTogetherWithConfirmPopUp:(BOOL)a0;
- (void)startGameRoomEnterFrom:(long long)a0;
- (void)startWatchTogetherWithConfirmPopup:(BOOL)a0 extraInfo:(id)a1;
- (void)voipConfirmPopupBeforeStartWithActionBarItem:(id)a0;
- (void)routeToFriendRoomWithType:(id)a0;
- (BOOL)p_isAnchorLiveRatherThanAudience;
- (void)startAudioVoipEnterFrom:(long long)a0;
- (id)messageViewController;
- (void)p_startAudioVoipEnterFrom:(long long)a0 extraAction:(unsigned long long)a1;
- (BOOL)p_canStartVoIP:(long long)a0 enterFrom:(long long)a1;
- (long long)p_rtvEnterFromWithAWERTVEnterFrom:(long long)a0;
- (BOOL)p_isEnableVideoVoip;
- (BOOL)disEnableUseVoipOnServiceChat;
- (void)p_preloadRTCEngineIfNeeded;
- (id)disableUseVoipServiceToast;
- (void)p_checkUGTogetherTaskAction;
- (void)p_showGroupVoipInviteViewControllerWithRTVType:(long long)a0 enterFrom:(long long)a1 selfStickerID:(id)a2;
- (void)didClickGroupVoipButtonWithType:(long long)a0 enterFrom:(long long)a1;
- (id)init;
- (id)conversation;
- (id)inputVC;

@end
