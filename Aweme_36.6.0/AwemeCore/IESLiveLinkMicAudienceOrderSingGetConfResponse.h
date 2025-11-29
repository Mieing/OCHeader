@class IESLiveLinkMicAudienceOrderSingGetConfResponse_ResponseData;

@interface IESLiveLinkMicAudienceOrderSingGetConfResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceOrderSingGetConfResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
