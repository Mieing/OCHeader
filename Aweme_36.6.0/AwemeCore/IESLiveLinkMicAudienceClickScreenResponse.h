@class IESLiveLinkMicAudienceClickScreenResponse_ResponseData;

@interface IESLiveLinkMicAudienceClickScreenResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceClickScreenResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
