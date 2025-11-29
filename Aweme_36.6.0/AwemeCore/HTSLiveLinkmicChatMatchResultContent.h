@class IESLiveChatMatchGroupInfo;

@interface HTSLiveLinkmicChatMatchResultContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChatMatchGroupInfo *groupInfo;
@property (nonatomic) BOOL hasGroupInfo;

+ (id)descriptor;

@end
