@class IESLiveLinkMicAudienceOrderSingGenStreamInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceOrderSingGenStreamInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceOrderSingGenStreamInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
