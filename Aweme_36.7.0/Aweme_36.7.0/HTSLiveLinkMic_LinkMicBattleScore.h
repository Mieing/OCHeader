@class NSString;

@interface HTSLiveLinkMic_LinkMicBattleScore : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long score;

+ (id)descriptor;

@end
