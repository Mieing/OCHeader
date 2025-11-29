@class NSString;

@interface IESLiveLotteryActionResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *timeLeft;
@property (copy, nonatomic) NSString *resultExtraInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
