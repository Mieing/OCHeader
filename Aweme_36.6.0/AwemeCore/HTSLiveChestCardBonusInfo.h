@class NSString;

@interface HTSLiveChestCardBonusInfo : IESLivePBBaseMessage

@property (nonatomic) double rate;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
