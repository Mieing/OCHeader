@interface VQMProfileInfoWxconf : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timestampFinalInitSucc;
@property (nonatomic) unsigned long long timestampFinalInitFail;
@property (nonatomic) unsigned long long timestampFinalJoinSucc;
@property (nonatomic) unsigned long long timestampFinalJoinFail;
@property (nonatomic) unsigned long long timestampFinalInviteSucc;
@property (nonatomic) unsigned long long timestampFinalInviteFail;
@property (nonatomic) unsigned long long timestampFinalInviteTimeout;
@property (nonatomic) unsigned long long timestampFinalRecvInvite;
@property (nonatomic) unsigned long long timestampFinalRecvInviteBusy;
@property (nonatomic) unsigned long long timestampFinalRecvSimuCall;
@property (nonatomic) unsigned long long timestampFinalRecvNotifyFail;
@property (nonatomic) unsigned long long timestampFinalAckSucc;
@property (nonatomic) unsigned long long timestampFinalAckFail;
@property (nonatomic) unsigned long long timestampFinalAcceptSucc;
@property (nonatomic) unsigned long long timestampFinalAcceptFail;
@property (nonatomic) unsigned long long timestampFinalAcceptTimeout;
@property (nonatomic) unsigned long long timestampFinalReplyByOther;
@property (nonatomic) unsigned long long timestampFinalAddSucc;
@property (nonatomic) unsigned long long timestampFinalAddFail;
@property (nonatomic) unsigned long long timestampFinalMemberChange;
@property (nonatomic) unsigned long long timestampFinalAvMemberChange;
@property (nonatomic) unsigned long long timestampFinalTalkSucc;
@property (nonatomic) unsigned long long timestampFinalTalkFail;
@property (nonatomic) unsigned long long timestampFinalCallBroken;
@property (nonatomic) unsigned long long timestampFinalCallWording;
@property (nonatomic) unsigned long long timestampFinalCallEnd;
@property (nonatomic) unsigned long long timestampFinalAuthkeyExpired;
@property (nonatomic) unsigned long long timestampFinalSocketBindtoNetwork;
@property (nonatomic) unsigned long long timestampFinalRecvCmdmsg;
@property (nonatomic) unsigned long long timestampFinalStartPublishRet;
@property (nonatomic) unsigned long long timestampFinalStopPublishRet;
@property (nonatomic) unsigned long long timestampFinalSwitchavFail;
@property (nonatomic) unsigned long long timestampFinalNetworkPoor;
@property (nonatomic) unsigned long long timestampFinalSendRequest;
@property (nonatomic) unsigned long long timestampFinalSimuCallCloseVideo;

+ (void)initialize;

@end
