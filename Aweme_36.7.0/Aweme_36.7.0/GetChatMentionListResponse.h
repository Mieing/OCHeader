@class GetChatMentionListResponse_ResponseData;

@interface GetChatMentionListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetChatMentionListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
