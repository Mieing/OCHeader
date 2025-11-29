@class NSString;

@interface IESLiveLotteryActionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *lotteryId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
