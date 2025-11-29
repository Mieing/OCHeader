@class NSString, IESLiveMultiLiveCoreInfo, IESLiveMultiRtcInfo, IESLiveLinkMicAudienceLeaveResponse_ResponseData, NSObject, HTSLiveUser, IESLiveLinkMicAudienceApplyResponse_ResponseData, NSNumber;

@interface IESLiveLinkmicLinkAudienceApplyContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkApplyContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceApplyResponse_ResponseData *applyResponse;
@property (retain, nonatomic) IESLiveLinkMicAudienceLeaveResponse_ResponseData *leaveResponse;
@property (copy, nonatomic) NSString *applyUID;
@property (copy, nonatomic) HTSLiveUser *applyUser;
@property (readonly, nonatomic) int silenceStatus;
@property (readonly, nonatomic) int linkType;
@property (readonly, copy, nonatomic) NSString *liveCoreExtInfo;
@property (readonly, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (readonly, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (readonly, copy, nonatomic) NSString *subRtcExtInfo;
@property (readonly, nonatomic) BOOL isInWaiting;
@property (readonly, nonatomic) BOOL hasMediaInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
@property (readonly, nonatomic) BOOL autoJoin;
@property (readonly, nonatomic) BOOL autoJoinFull;
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

- (id)initWithApplyResponse:(id)a0;
- (id)initWithLeaveResponse:(id)a0;
- (void).cxx_destruct;
- (id)rawData;
- (id)extraData;

@end
