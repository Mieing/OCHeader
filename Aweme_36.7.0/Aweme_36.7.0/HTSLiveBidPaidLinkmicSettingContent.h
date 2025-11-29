@interface HTSLiveBidPaidLinkmicSettingContent : IESLivePBBaseMessage

@property (nonatomic) long long startPrice;
@property (nonatomic) long long linkDuration;

+ (id)descriptor;

@end
