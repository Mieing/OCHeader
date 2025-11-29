@class NSNumber, NSString;
@protocol IESLiveLinkmicJoinChannelContext;

@interface IESLiveChatChannelLinkmicResponseWrapper : NSObject <IESLiveLinkmicLinkCreateContext, IESLiveLinkmicLinkCloseContext, IESLiveLinkmicLinkInviteContext, IESLiveLinkmicLinkPermitContext, IESLiveLinkmicJoinChannelContext, IESLiveLinkmicLeaveChannelContext, IESLiveLinkmicLinkApplyContext, IESLiveLinkmicKickoutContext, IESLiveLinkmicSilenceStatusContext, IESLiveLinkmicLinkReplyContext>

@property (retain, nonatomic) id responseObj;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly, copy, nonatomic) NSString *linkerSessionId;
@property (readonly, copy, nonatomic) NSString *remoteLinkerSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *banAnchorUserId;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) long long permitSource;
@property (nonatomic) long long linkType;
@property (nonatomic) unsigned long long pushRtcType;
@property (readonly, nonatomic) id<IESLiveLinkmicJoinChannelContext> joinChannelContext;
@property (nonatomic) long long uilayout;
@property (readonly, nonatomic) BOOL isInWaiting;
@property (readonly, nonatomic) BOOL hasMediaInfo;
@property (readonly, nonatomic) BOOL autoJoin;
@property (readonly, nonatomic) BOOL autoJoinFull;
@property (readonly, nonatomic) BOOL isSysKickOut;
@property (readonly, nonatomic) long long sysKickOutSource;
@property (readonly, nonatomic) BOOL switchToSilence;
@property (readonly, nonatomic) int replyType;

- (id)inviterUID;
- (long long)silenceStatus;
- (id)rtcExtraInfo;
- (id)linkedUserList;
- (id)waitingUserList;
- (id)inviteeUID;
- (BOOL)isAgree;
- (id)applyUID;
- (id)approverUID;
- (id)kickoutFromUserID;
- (long long)dataSyncVersion;
- (id)silenceFromUserID;
- (id)silenceUserID;
- (long long)silenceSource;
- (id)applyUser;
- (id)inviterSecUID;
- (id)inviteeSecUID;
- (id)joinedUserID;
- (BOOL)shouldMuteAudioAfterJoined;
- (id)leaveUserID;
- (id)commonInfo;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)rawData;
- (id)extraData;
- (BOOL)isSilence;

@end
