@class IESLiveLinkMicAudienceListV2Response_ResponseData;

@interface IESLiveLinkMicAudienceListV2Response : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceListV2Response_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
