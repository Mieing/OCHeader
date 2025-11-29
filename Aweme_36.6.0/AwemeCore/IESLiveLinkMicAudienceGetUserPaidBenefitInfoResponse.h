@class IESLiveLinkMicAudienceGetUserPaidBenefitInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetUserPaidBenefitInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetUserPaidBenefitInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
