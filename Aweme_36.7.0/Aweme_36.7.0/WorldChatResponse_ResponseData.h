@class HTSLiveWorldChatData;

@interface WorldChatResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveWorldChatData *worldChatResp;
@property (nonatomic) BOOL hasWorldChatResp;

+ (id)descriptor;

@end
