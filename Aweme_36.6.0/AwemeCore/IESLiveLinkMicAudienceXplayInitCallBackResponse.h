@class IESLiveLinkMicAudienceXplayInitCallBackResponse_ResponseData;

@interface IESLiveLinkMicAudienceXplayInitCallBackResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceXplayInitCallBackResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
