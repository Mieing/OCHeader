@class IESLiveLinkMicProfitOpenGiftCommentResponse_ResponseData;

@interface IESLiveLinkMicProfitOpenGiftCommentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitOpenGiftCommentResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
