@interface VOIPUIHelper : NSObject

+ (id)FormVoipMessageContentWithInviteType:(int)a0 RoomId:(unsigned long long)a1 Key:(long long)a2 UiStatus:(int)a3 RecvTime:(unsigned int)a4 WordingType:(unsigned int)a5 Duration:(unsigned int)a6;
+ (BOOL)shouldEnableVoIPCoreAudioLogic;
+ (BOOL)shouldEnableAudioUnitLogic;
+ (BOOL)shouldBlockUserRingRecommend;
+ (BOOL)shouldSupportIlinkAddMember;
+ (BOOL)shouldSupportVideoHintShow;
+ (int)VoIPMPSwitchPortType:(id)a0;
+ (BOOL)shouldVideoLCKAutoAccept;
+ (BOOL)shouldReconfirmInvite;

@end
