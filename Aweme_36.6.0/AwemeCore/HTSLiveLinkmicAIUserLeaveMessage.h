@class NSString, HTSLiveCommon, IESLiveLinkmicAIUser;

@interface HTSLiveLinkmicAIUserLeaveMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *channelId;
@property (retain, nonatomic) IESLiveLinkmicAIUser *aiUser;
@property (nonatomic) BOOL hasAiUser;
@property (nonatomic) int aiUserType;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *leaveReason;

+ (id)descriptor;

@end
