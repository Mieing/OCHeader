@class IESLiveLinkMicAudienceAdjustPositionPingResponse_ResponseData;

@interface IESLiveLinkMicAudienceAdjustPositionPingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceAdjustPositionPingResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
