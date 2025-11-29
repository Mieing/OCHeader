@class NSString, IESLiveMultiLiveCoreInfo, IESLiveMultiRtcInfo, IESLiveLinkMicAudienceReplyResponse_Data, HTSLiveLinkMicMethod, NSObject, IESLiveMCUContent, NSNumber, HTSLiveAnchorLinkmicInfo;

@interface IESLiveLinkmicLinkAudienceReplyContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkReplyContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceReplyResponse_Data *replyResponse;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (copy, nonatomic) NSString *inviterUID;
@property (copy, nonatomic) NSString *inviterSecUID;
@property (copy, nonatomic) NSString *inviteeUID;
@property (copy, nonatomic) NSString *inviteeSecUID;
@property (retain, nonatomic) IESLiveMCUContent *mcuContent;
@property (copy, nonatomic) NSString *anchorLinkmicIdStr;
@property (retain, nonatomic) HTSLiveAnchorLinkmicInfo *backupAnchorLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
@property (readonly, copy, nonatomic) NSString *liveCoreExtInfo;
@property (readonly, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (readonly, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (readonly, nonatomic) int replyType;
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
@property (nonatomic) BOOL hasGeustLinkmicInfo;

@end
