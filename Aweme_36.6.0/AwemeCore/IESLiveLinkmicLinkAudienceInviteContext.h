@class NSString, IESLiveMultiLiveCoreInfo, IESLiveMultiRtcInfo, HTSLiveImage, IESLiveLinkMicAudienceInviteResponse_Data, HTSLiveLinkMicMethod, NSObject, NSNumber, HTSLiveAnchorLinkmicInfo;

@interface IESLiveLinkmicLinkAudienceInviteContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkInviteContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceInviteResponse_Data *inviteResponse;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (copy, nonatomic) NSString *inviterUID;
@property (copy, nonatomic) NSString *inviterSecUID;
@property (copy, nonatomic) NSString *inviteeUID;
@property (copy, nonatomic) NSString *inviteeSecUID;
@property (copy, nonatomic) NSString *secFromUserId;
@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *anchorLinkmicStrID;
@property (retain, nonatomic) HTSLiveAnchorLinkmicInfo *backupAnchorLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *liveCoreExtInfo;
@property (readonly, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (readonly, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (readonly, copy, nonatomic) NSString *invitePrompt;
@property (readonly, nonatomic) HTSLiveImage *inviteImage;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
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

- (id)initWithLinkMicMethodMessage:(id)a0;
- (id)initWithInviteResponse:(id)a0;
- (void).cxx_destruct;
- (id)rawData;
- (id)extraData;

@end
