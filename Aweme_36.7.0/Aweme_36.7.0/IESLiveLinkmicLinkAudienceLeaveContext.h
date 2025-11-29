@class NSObject, NSString, IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic, NSNumber, IESLiveLinkMicAudienceLeaveResponse_ResponseData;

@interface IESLiveLinkmicLinkAudienceLeaveContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLeaveChannelContext> {
    NSObject *_rawData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceLeaveResponse_ResponseData *leaveResponse;
@property (retain, nonatomic) NSString *leaveUserID;
@property (nonatomic) int postAction;
@property (nonatomic) long long paidCount;
@property (nonatomic) long long linkDuration;
@property (nonatomic) int controlType;
@property (readonly, nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic *userinfoDuringLinkmic;
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

- (id)initWithLeaveResponse:(id)a0;
- (void).cxx_destruct;
- (id)rawData;

@end
