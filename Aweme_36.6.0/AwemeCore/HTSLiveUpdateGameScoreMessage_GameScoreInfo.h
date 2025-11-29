@class NSString;

@interface HTSLiveUpdateGameScoreMessage_GameScoreInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *joinUid;
@property (nonatomic) BOOL joinGame;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *joinOpenId;

+ (id)descriptor;

@end
