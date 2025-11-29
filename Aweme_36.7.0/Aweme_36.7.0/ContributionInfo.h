@interface ContributionInfo : IESLivePBBaseMessage

@property (nonatomic) long long gift;
@property (nonatomic) long long fansclubCount;
@property (nonatomic) long long followCount;

+ (id)descriptor;

@end
