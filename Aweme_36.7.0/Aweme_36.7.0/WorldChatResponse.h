@class WorldChatResponse_ResponseData;

@interface WorldChatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) WorldChatResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
