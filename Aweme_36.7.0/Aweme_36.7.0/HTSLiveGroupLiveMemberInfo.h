@class HTSLiveGiftPanelUserExtraInfo, HTSLiveUser;

@interface HTSLiveGroupLiveMemberInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (nonatomic) BOOL showScore;
@property (retain, nonatomic) HTSLiveGiftPanelUserExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;

+ (id)descriptor;

@end
