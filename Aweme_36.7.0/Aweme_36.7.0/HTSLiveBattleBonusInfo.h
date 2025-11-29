@class NSString;

@interface HTSLiveBattleBonusInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *giftFromUserId;

+ (id)descriptor;

@end
