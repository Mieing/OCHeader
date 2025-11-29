@class NSString;

@interface HTSLiveLinkmicThemedCompetitionBannerMessageForPC_Content : IESLivePBBaseMessage

@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long deltaScore;
@property (nonatomic) int winType;

+ (id)descriptor;

@end
