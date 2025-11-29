@class IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
