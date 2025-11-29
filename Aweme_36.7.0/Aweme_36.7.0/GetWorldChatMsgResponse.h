@class GetWorldChatMsgResponse_ResponseData;

@interface GetWorldChatMsgResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetWorldChatMsgResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
