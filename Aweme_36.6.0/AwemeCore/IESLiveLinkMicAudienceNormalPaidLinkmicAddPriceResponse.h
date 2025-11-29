@class IESLiveLinkMicAudienceNormalPaidLinkmicAddPriceResponse_ResponseData;

@interface IESLiveLinkMicAudienceNormalPaidLinkmicAddPriceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceNormalPaidLinkmicAddPriceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
