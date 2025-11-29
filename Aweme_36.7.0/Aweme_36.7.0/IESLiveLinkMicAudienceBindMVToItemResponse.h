@class IESLiveLinkMicAudienceBindMVToItemResponse_ResponseData;

@interface IESLiveLinkMicAudienceBindMVToItemResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceBindMVToItemResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
