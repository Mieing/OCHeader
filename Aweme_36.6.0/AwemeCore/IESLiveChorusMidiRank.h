@class NSString, IESLiveChorusRankUser;

@interface IESLiveChorusMidiRank : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusRankUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *curMidiScore;

+ (id)descriptor;

@end
