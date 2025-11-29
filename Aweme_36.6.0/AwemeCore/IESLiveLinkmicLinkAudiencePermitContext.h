@class NSString, IESLiveMultiLiveCoreInfo, IESLiveMultiRtcInfo, HTSLiveLinkMicMethod, NSObject, IESLiveMCUContent, NSNumber, IESLiveLinkMicAudiencePermitResponse_ResponseData;
@protocol IESLiveLinkmicJoinChannelContext;

@interface IESLiveLinkmicLinkAudiencePermitContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkPermitContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudiencePermitResponse_ResponseData *permitResponse;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (copy, nonatomic) NSString *applyUID;
@property (copy, nonatomic) NSString *approverUID;
@property (copy, nonatomic) NSString *anchorLinkmicStrID;
@property (retain, nonatomic) IESLiveMCUContent *mcuContent;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
@property (readonly, copy, nonatomic) NSString *subRtcExtInfo;
@property (readonly, copy, nonatomic) NSString *liveCoreExtInfo;
@property (readonly, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (readonly, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (readonly, nonatomic) id<IESLiveLinkmicJoinChannelContext> joinChannelContext;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (nonatomic) long long permitSource;
@property (nonatomic) long long linkType;
@property (nonatomic) unsigned long long pushRtcType;
@property (nonatomic) long long uilayout;
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

@end
