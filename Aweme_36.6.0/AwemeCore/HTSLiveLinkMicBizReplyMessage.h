@class NSString, HTSLiveCommon, IESLiveLinkMicBizExtra;

@interface HTSLiveLinkMicBizReplyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int bizType;
@property (nonatomic) int inviteType;
@property (nonatomic) int repCode;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (copy, nonatomic) NSString *rejectPrompts;
@property (copy, nonatomic) NSString *kickedUsersUniqueId;

+ (id)descriptor;

@end
