@class NSString, IESLiveKtvProfitChorusRankResponse_CurrentMusic, IESLiveChorusRankUser;

@interface IESLiveKtvProfitChorusRankResponse_Rank : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusRankUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *gapDescription;
@property (copy, nonatomic) NSString *curScore;
@property (retain, nonatomic) IESLiveKtvProfitChorusRankResponse_CurrentMusic *roomCurrentMusic;
@property (nonatomic) BOOL hasRoomCurrentMusic;
@property (copy, nonatomic) NSString *userNumStr;

+ (id)descriptor;

@end
