@class IESLiveLinkMicAudienceGuestLinkSendSignalResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkSendSignalResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkSendSignalResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
