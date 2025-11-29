@class NSString, HTSLiveCommon, IESLiveLinkmicAIUser;

@interface HTSLiveLinkmicAIUserJoinMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *channelId;
@property (retain, nonatomic) IESLiveLinkmicAIUser *aiUser;
@property (nonatomic) BOOL hasAiUser;
@property (nonatomic) int aiUserType;

+ (id)descriptor;

@end
