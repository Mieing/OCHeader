@class NSString;

@interface IESLiveKtvProfitChorusRankResponse_CurrentMusic : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) long long songId;

+ (id)descriptor;

@end
