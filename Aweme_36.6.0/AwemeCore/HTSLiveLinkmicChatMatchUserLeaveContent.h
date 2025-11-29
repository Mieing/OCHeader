@class NSString, IESLiveChatMatchGroupInfo;

@interface HTSLiveLinkmicChatMatchUserLeaveContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChatMatchGroupInfo *groupInfo;
@property (nonatomic) BOOL hasGroupInfo;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
