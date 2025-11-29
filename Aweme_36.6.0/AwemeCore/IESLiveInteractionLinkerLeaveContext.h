@class NSString, IESLiveLinkmicLinkAudienceLeaveContext, IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic, NSObject;

@interface IESLiveInteractionLinkerLeaveContext : NSObject <IESLiveInteractionLinkerLeaveContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceLeaveContext *linkmicContext;
@property (readonly, nonatomic) int controlType;
@property (readonly, nonatomic) long long paidCount;
@property (readonly, nonatomic) long long linkDuration;
@property (copy, nonatomic) NSString *linkmicId;
@property (readonly, nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic *userinfoDuringLinkmic;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceLeaveContext:(id)a0;
- (void).cxx_destruct;

@end
