@class IESLiveLinkMicAudienceGetXPlayInitInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetXPlayInitInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetXPlayInitInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
