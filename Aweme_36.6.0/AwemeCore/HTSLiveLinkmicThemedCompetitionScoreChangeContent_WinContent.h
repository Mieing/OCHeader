@class NSString;

@interface HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent : IESLivePBBaseMessage

@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int winType;

+ (id)descriptor;

@end
