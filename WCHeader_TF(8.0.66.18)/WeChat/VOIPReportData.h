@interface VOIPReportData : NSObject

+ (void)ReportVoipCallFromScene:(unsigned int)a0 CallType:(unsigned int)a1 WordingType:(unsigned int)a2;
+ (void)ReportVoipSelectFriendScene:(unsigned int)a0 CallType:(unsigned int)a1;
+ (void)ReportSwitchToVoiceAcceptWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithScene:(unsigned int)a3 WithUserType:(int)a4;
+ (void)ReportVoipActionType:(unsigned int)a0;
+ (void)ReportVoipSoundActionInitType:(unsigned int)a0 HandsFree:(BOOL)a1;
+ (void)ReportVoipSoundActionInitType:(unsigned int)a0 Mute:(BOOL)a1;
+ (void)ReportVideoCallFromPlus;
+ (void)ReportVideoCallFromMessageNotConnect;
+ (void)ReportVideoCallFromMessageInterrpt;
+ (void)ReportVideoCallFromMessageOver;
+ (void)ReportVideoCallFromPlugin;
+ (void)ReportVideoCallFromProfile;
+ (void)ReportAudioCallFromPlus;
+ (void)ReportAudioCallFromMessageNotConnect;
+ (void)ReportAudioCallFromMessageInterrpt;
+ (void)ReportAudioCallFromMessageOver;
+ (void)ReportAudioCallFromPlugin;
+ (void)ReportAudioCallFromProfile;
+ (void)ReportSelectVoipFriendFromPlus;
+ (void)ReportSelectVoiceVoipFriendFromPlus;
+ (void)ReportSwitchToVoiceBeforeRemoteAcceptWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2;
+ (void)ReportSwitchToVoiceBeforeAcceptWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2;
+ (void)ReportSwitchToVoiceAfterAcceptWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2;
+ (void)ReportVoipActionSwitchCamera;
+ (void)ReportVoipActionDragSmallPreview;
+ (void)ReportVoipActionClickSmallPreview;
+ (void)ReportVoipActionClickBigPreview;
+ (void)ReportVideoEntranceMute:(BOOL)a0;
+ (void)ReportAudioEntranceMute:(BOOL)a0;
+ (void)ReportVoipStartCallWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithStartCallStatus:(int)a3 WithNetType:(int)a4 WithResponseTs:(unsigned int)a5;
+ (void)ReportVoipGotRemoteStatusWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithRemoteStatus:(int)a3;
+ (void)ReportVoipCancelInviteWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithCancelInvite:(int)a3 WithCancelTime:(int)a4 WithTimeStamp:(unsigned long long)a5;
+ (void)ReportVoipTalkingWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithRoomMemberId:(int)a3 WithIsTalkingStatus:(int)a4;
+ (void)ReportDataNotifyWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithTimeStamp:(unsigned long long)a3;
+ (void)ReportGetRoomInfoWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithRespType:(unsigned int)a3 WithTimeStamp:(unsigned long long)a4;
+ (void)ReportPushUIReportWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithAckStatus:(int)a3 WithNetType:(int)a4 WithTimeStamp:(unsigned long long)a5;
+ (void)ReportCalledActionWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithUserActionType:(int)a3;
+ (void)ReportReceiveCallUseCallkit;
+ (void)ReportVoipGotNotifyWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2;
+ (void)ReportVoipWhenSessionAnimationDisappearWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithUserActionType:(int)a3;
+ (void)ReportVoipHangUpSessionWithRoomId:(unsigned long long)a0 WithRoomKey:(long long)a1 WithRoomType:(unsigned int)a2 WithUserActionType:(int)a3;
+ (void)dataReportAppSettingsWithVoipMonoMsg:(id)a0;

@end
