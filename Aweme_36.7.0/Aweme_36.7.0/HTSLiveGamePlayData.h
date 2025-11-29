@interface HTSLiveGamePlayData : IESLivePBBaseMessage

@property (nonatomic) int playType;
@property (nonatomic) long long playId;
@property (nonatomic) long long gameId;

+ (id)descriptor;

@end
