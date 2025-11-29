@class NSString;

@interface HTSLiveCardProps : IESLivePBBaseMessage

@property (nonatomic) double ratio;
@property (nonatomic) long long countdownEndtime;
@property (copy, nonatomic) NSString *enhancerText;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *countBgColor;

+ (id)descriptor;

@end
