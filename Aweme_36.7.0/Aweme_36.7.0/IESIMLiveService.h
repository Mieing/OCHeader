@class NSString;

@interface IESIMLiveService : HTSService <IESIMLiveService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)acquaintanceStatus;
- (BOOL)hasCreatedLiveRoom;
- (void)trackLiveShowWithRoom:(id)a0 coreParams:(id)a1 extraParams:(id)a2;
- (BOOL)isInAudienceLiving;
- (BOOL)isInAnchorLiving;
- (BOOL)isInLiving;
- (BOOL)isAudienceDuringLive;
- (BOOL)isInEcommerceRoom;
- (BOOL)canOpenLiveScheme:(id)a0;
- (BOOL)hasEnteredLiveRoom;
- (void)openLiveScheme:(id)a0;
- (BOOL)liveAnnouncementFansGroupShareOpt;
- (id)getChatGroupOnlineUserViewController:(id)a0 extraParams:(id)a1;
- (void)transitionToLiveVerifyPageFrom:(id)a0;
- (void)joinMatrixWithToken:(id)a0 completed:(id /* block */)a1;
- (void)pushOpenType:(id /* block */)a0;
- (id)liveAcqIntimateABConfigForEnterFrom:(id)a0;
- (void)fetchLiveRoomStatusWithRoomId:(id)a0 completion:(id /* block */)a1;
- (id)getLiveLynxContainerForIMWithURL:(id)a0 fallBackURL:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 changeBlock:(id /* block */)a3;
- (void)stopLivePictureInPicture;
- (BOOL)isInteractLinkingMicSmallWindowShowingWithErrorToast:(id)a0;
- (id)trackWithInteractSmallWindowType;
- (BOOL)isInFormatVoiceChat;
- (BOOL)isLivePipShow;
- (BOOL)isLiveServiceAvailable;
- (BOOL)enableIMShowLiveStatus;
- (BOOL)enableIMLiveAvatorEnterLiveRoom;
- (void)startCheckLiveStatus;
- (void)pauseCheckLiveStatus;
- (void)resumeCheckLiveStatus;
- (void)stopCheckLiveStatus;
- (void)removeMonitorWithUserID:(id)a0 sessionID:(id)a1;
- (BOOL)monitorDidClickWithUserID:(id)a0 sessionID:(id)a1 chatType:(long long)a2 isFansGroup:(BOOL)a3;
- (void)pauseCurrentLive;
- (void)resumeCurrentLive;
- (struct CGSize { double x0; double x1; })currentSmallWindowVideoSize;
- (void)mutePlayer:(BOOL)a0 completion:(id /* block */)a1;
- (void)openAnnouncementPanelWithPageType:(id)a0 announcementID:(id)a1 entranceType:(int)a2 configParams:(id)a3 onHostVC:(id)a4 completion:(id /* block */)a5;
- (id)createMMKVStore;
- (void)transferToLiveEpisodeWithMsg:(id)a0;

@end
