@class IESLiveLinkMicAudiencePositionStashPopResponse_ResponseData;

@interface IESLiveLinkMicAudiencePositionStashPopResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudiencePositionStashPopResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
