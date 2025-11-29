@class NSString;

@interface HTSLiveFansclubParticipateIncentive : IESLivePBBaseMessage

@property (nonatomic) long long goldCoinsCount;
@property (copy, nonatomic) NSString *awardUnit;
@property (copy, nonatomic) NSString *popupData;

+ (id)descriptor;

@end
