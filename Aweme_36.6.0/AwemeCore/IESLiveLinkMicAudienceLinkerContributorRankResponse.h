@class IESLiveLinkMicAudienceLinkerContributorRankResponse_ResponseData;

@interface IESLiveLinkMicAudienceLinkerContributorRankResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceLinkerContributorRankResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
