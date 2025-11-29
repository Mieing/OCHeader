@class NSString, HTSLiveCommon;

@interface HTSLiveTeamPlayNewApplyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL needNotifyToApply;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
