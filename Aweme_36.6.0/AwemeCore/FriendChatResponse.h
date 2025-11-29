@class FriendChatResponse_ResponseData;

@interface FriendChatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FriendChatResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
