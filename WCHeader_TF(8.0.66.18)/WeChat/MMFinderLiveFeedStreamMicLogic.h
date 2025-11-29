@class MMFinderLiveFeedStreamConnectMicUserInfoView;

@interface MMFinderLiveFeedStreamMicLogic : MMFinderLiveCDNViewerMicLogic

@property (weak, nonatomic) MMFinderLiveFeedStreamConnectMicUserInfoView *micContainerView;

- (void)handleSEIMicMsgInfoUpdated:(id)a0 listChanged:(BOOL)a1;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)a0;
- (void)updateCurrentAnchorViewWhenPureAudioModeChanged;
- (void)updateUserPkStateUI;
- (void)checkAndUpdateLiveView;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)a0;
- (id)feedStreamTask;
- (id)currentAnchorFinderUserName;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)a0;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)a0 listChanged:(BOOL)a1;
- (void)updateAudioRoomInfoView;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)a0;
- (void)updateAudioRoomMicViewWithSdkUserId:(id)a0 andUIChangeType:(unsigned long long)a1;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(BOOL)a0;
- (void)updateMicUsersInMicInfo:(id)a0;
- (void)updateMicUserHeatValuesInMicInfo:(id)a0;
- (void).cxx_destruct;

@end
