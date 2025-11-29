@class IESLiveLinkMicAudienceUpdateLinkTypeReplyResponse_ResponseData;

@interface IESLiveLinkMicAudienceUpdateLinkTypeReplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceUpdateLinkTypeReplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
