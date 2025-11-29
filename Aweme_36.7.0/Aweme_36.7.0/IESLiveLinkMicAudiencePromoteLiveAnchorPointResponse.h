@class IESLiveLinkMicAudiencePromoteLiveAnchorPointResponse_ResponseData;

@interface IESLiveLinkMicAudiencePromoteLiveAnchorPointResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudiencePromoteLiveAnchorPointResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
