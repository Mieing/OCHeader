@protocol RTVPerformanceMonitorInterface, RTVUserProfileManagerInterface, RxInjector, RTVFeedTrackerHelperInterface;

@interface RTVFeedTracker : RTVInteractionTracker

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (readonly, nonatomic) id<RTVFeedTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)rxAwakeFromPropertyInjection;
- (void)track_followWithEnterFrom:(id)a0 enterMethod:(id)a1 toUserID:(id)a2;
- (void)tracker_showCastVideoPanelWithSession:(id)a0 tabName:(id)a1 subTabName:(id)a2;
- (void)tracker_showCastVideoPanelWithSession:(id)a0 belongUserType:(id)a1 videoFrom:(id)a2 tabName:(id)a3 mixID:(id)a4 challengeID:(id)a5 extraInfo:(id)a6;
- (void)tracker_guestClickCommentIconWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_guestCommentPageShowWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_clickPlayRecommendVideoButtonWithSession:(id)a0 extraInfo:(id)a1;
- (void)startFeedShareWithSession:(id)a0;
- (void)feedShareLinkSuccessWithSession:(id)a0;
- (void)track_inviteUserWithSession:(id)a0 inviteUserIDs:(id)a1 groupIDs:(id)a2 dict:(id)a3;
- (void)startLandscapeDurationTracker;
- (void)endLandscapeDurationTrackerWithContentType:(id)a0;
- (void)tracker_clickShareButtonWithSession:(id)a0 hasHotReminder:(BOOL)a1 extraInfo:(id)a2;
- (void)track_interfaceOrientationLayoutChange:(BOOL)a0 contentType:(id)a1;
- (id)remotePlayViewControllerCommonTrackInfoWithSession:(id)a0;
- (void)tracker_clickBackToFeedButtonWithSession:(id)a0;
- (id)customFeedShareTipContent;
- (void)track_livesdkVideoPlayPause;
- (void)track_livesdkEnterCoplayMiniWithMemberCnt:(unsigned long long)a0 eventType:(id)a1 extraInfo:(id)a2;
- (void)track_enterChatWithMethod:(id)a0 chatType:(id)a1 convID:(id)a2 extraInfo:(id)a3;
- (void)track_feedSharePIPSettingIsOn:(unsigned char)a0 enterFrom:(id)a1;
- (void)track_livesdReturnFullScreenWithExtraInfo:(id)a0;
- (id)__enterFromStrWithEnterFrom:(long long)a0;
- (id)__commonParamsWithSession:(id)a0;
- (void)track_PinchWithSession:(id)a0 itemID:(id)a1 authorID:(id)a2 duration:(id)a3;
- (void)tracker_showBackToFeedButtonWithSession:(id)a0;
- (void)track_livesdkClosePopAlertShow;
- (void)tracker_clickControlViewMoreButtonWithSession:(id)a0;
- (void)tracker_sendCommentWithSession:(id)a0 content:(id)a1;
- (void)tracker_showInputPanelWithSession:(id)a0;
- (void)endFeedShareWithSession:(id)a0 isAnswer:(BOOL)a1 reason:(long long)a2 eventPage:(id)a3 enterMethod:(id)a4 extraInfo:(id)a5;
- (void)track_livesdkClickVideoPlayToggleWithNext:(BOOL)a0;
- (void)track_livesdkClickVideoPlay;
- (id)__markerWithSession:(id)a0;
- (void)track_cameraOpenActionString:(id)a0 session:(id)a1;
- (void)tracker_clickVolumeSettingWithSession:(id)a0;
- (void)tracker_volumeSettingResultWithSession:(id)a0 videoVolume:(long long)a1 callVolume:(long long)a2 isSetting:(BOOL)a3;
- (void)tracker_shareVideoBubleAction:(long long)a0 session:(id)a1 reminderModel:(id)a2;
- (void)track_livesdkClickEmojiPanel;
- (void)track_livesdkCoplayMoreSettingIconClick;
- (void)track_showRoomDistributionOwnerGuideWithSession:(id)a0 memberCnt:(id)a1;
- (void)track_ckickRoomDistributionOwnerGuideWithSession:(id)a0 memberCnt:(id)a1 clickType:(id)a2;
- (void)track_offsiteInviteIsSelfSharing:(BOOL)a0;
- (void)track_offsiteInvitePopupWithEventType:(id)a0 actionType:(id)a1;
- (void)track_reflowPopupClickWithSession:(id)a0 fromUserID:(id)a1;
- (void).cxx_destruct;

@end
