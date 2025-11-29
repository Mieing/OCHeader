@class ChatResponse_ResponseData;

@interface ChatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ChatResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
