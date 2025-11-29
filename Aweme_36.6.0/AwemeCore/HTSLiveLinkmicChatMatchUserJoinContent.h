@class IESLiveChatMatchGroupInfo;

@interface HTSLiveLinkmicChatMatchUserJoinContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChatMatchGroupInfo *groupInfo;
@property (nonatomic) BOOL hasGroupInfo;

+ (id)descriptor;

@end
