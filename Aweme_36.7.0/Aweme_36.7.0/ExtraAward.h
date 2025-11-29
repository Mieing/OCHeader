@class LuckyBoxGemStoneAward;

@interface ExtraAward : IESLivePBBaseMessage

@property (retain, nonatomic) LuckyBoxGemStoneAward *gemStoneAward;
@property (nonatomic) BOOL hasGemStoneAward;

+ (id)descriptor;

@end
